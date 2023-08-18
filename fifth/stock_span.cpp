#include<bits/stdc++.h>
using namespace std;

//brute force
vector<int> function_for_days(vector<int> prices){
    int days=0;
    vector<int> day;
    int n=prices.size();
    for(int i=0;i<n;i++){
        days=0;
        for(int j=i;j>=0;j--){
            if(prices[j]<=prices[i]){
                days++;
            }else{
                day.push_back(days);
                break;
            }
        }
    }
    return day;
}

//optimised using stack
vector<int> stockspan(vector<int> prices){
    vector<int> ans;
    stack<pair<int,int>> s;
    for(auto price:prices){
        int days=1;
        while(!s.empty() && s.top().first <= price){
            days += s.top().second;
            s.pop();
        }
        s.push({price,days});
        //s.push(make_pair(price,days));
        ans.push_back(days);
    }
    return ans;
}


int main()
{
    vector<int> a = {100,80,60,70,60,75,85};
    vector<int> res = stockspan(a);
    //vector<int> res = function_for_days(a);
    for(auto i:res){
        cout<<i<<" ";
    }
    cout<<endl;

    
    return 0;
}