#include<bits/stdc++.h>
using namespace std;

void maxSumSubarray(int arr[],int n,int k, int x){
    int sum = 0;
    for(int i=0;i<k;i++){
        sum += arr[i];
    }
    int ans = sum;

    if(sum<x){
        ans = sum;
    }
    for(int i=k;i<n;i++){
        sum = sum - arr[i-k];
        sum = sum + arr[i];
        if(sum < x){
            ans = max(ans,sum);
        }
    }
    cout << ans << endl;
}

int main()
{
    int arr[] = {7,5,4,6,8,9};
    int k = 3;
    int x = 20;
    maxSumSubarray(arr,6,k,x);

    
    return 0;
}