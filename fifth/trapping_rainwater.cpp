#include<bits/stdc++.h>
using namespace std;

//brute force
int function_for_max_water(vector<int> a){
    int n = a.size();
    vector<int> rightMax;
    vector<int> leftMax;
    leftMax.push_back(INT_MAX); //-0122233333
    rightMax.push_back(INT_MAX); //3333333222-
    int max1=INT_MIN,max2=INT_MIN;

    for(int i=0;i<n;i++){
        max1=max(max1,a[n-i-2]);
        //cout<<max1;
        rightMax.push_back(max1);

        max2=max(a[i],max2);
        //cout<<max2;
        leftMax.push_back(max2);
    }
    reverse(rightMax.begin(),rightMax.end());

    //for(int i=0;i<n;i++) cout<< rightMax[i];

    vector<int> minLR;
    for(int i=0;i<n;i++){
        if(i==0){
            minLR.push_back(0);
        }else if(i==n-1){
            minLR.push_back(0);
        }
        else{
            minLR.push_back(min(leftMax[i],rightMax[i]));
        }
        
       // cout<<minLR[i];
    }
    
    int ans = 0;
    for(int i=0;i<n;i++){
        ans += max(minLR[i]-a[i],0);
    }
    return ans;

}

//optimised using stack
int rain_water(vector<int> a){
    stack<int> st;
    int ans=0;
    int n=a.size();
    for(int i=0;i<n;i++){
        while(!st.empty() && a[st.top()] < a[i]){
            int cur = st.top();
            st.pop();
            if(st.empty()){
                break;
            }
            int diff = i - st.top() - 1;
            ans+=(min(a[st.top()],a[i]) - a[cur])*diff;
        }
        st.push(i);
    }
    return ans;
}

int main()
{
    vector<int> a = {0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<function_for_max_water(a);
    cout<<endl;
    cout<<rain_water(a);


    
    return 0;
}