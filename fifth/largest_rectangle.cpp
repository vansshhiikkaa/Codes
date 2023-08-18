#include<bits/stdc++.h>
using namespace std;

//brute force approach
int function_for_max_area(vector<int> a){
    
    int ans=0,n=a.size();

    for(int i=0;i<n;i++){
        int minh = INT_MAX;
        for(int j=i;j<n;j++){
            minh=min(a[j],minh);
            int len=j-i+1;
            ans=max(ans,len*minh);
        }
    }
    return ans;
}

int get_max_area(vector<int> a){
    stack<int> st;
    int n = a.size(),ans = 0, i=0;
    a.push_back(0);
    while(i<n){
        while(!st.empty() && a[st.top()] > a[i]){
            int t = st.top();
            int h = a[t];
            st.pop();
            if(st.empty()){
                ans = max(ans, h*i);
            }
            else{
                int len = i - st.top() - 1;
                ans = max(ans,h*len);

            }
        }
        st.push(i);
        i++;
    }
    return ans;
}

int main()
{
    vector<int> a = {2,1,5,6,2,3};
    cout<<get_max_area(a);
    cout<< endl;
    cout << function_for_max_area(a);

    
    

    
    return 0;
}