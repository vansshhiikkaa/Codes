#include<bits/stdc++.h>
using namespace std;
//perfect number is in which sum of all divisors is equal to the number itself
//approach 1 O(N*K)

//approach 2 O(N*sqrt(N))
bool isNumberPerfect(int n){
    int sum = 1;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i == 0){
            if(i == n/i){
                sum+=i;
            }else{
                sum += i + n/i;
            }
        }
    }
    if(sum == n && n!=1){
        return true;
    }
    return false;
}

int maxSum(int arr[],int n,int k){
    if(n < k){
        cout << "invalid values" << endl;
        return -1;
    }

    int res = 0; 
    for(int i=0;i<k;i++){
        res += arr[i];
    }
    int sum= res;
    for(int i=k;i<n;i++){
        sum += arr[i] - arr[i-k];
        res = max(res,sum);
    }
    return res;
}
int maxNumberOfPerfects(int arr[], int n, int k){
    for(int i=0;i<n;i++){
        if(isNumberPerfect(arr[i])){
            arr[i]=1;
        }else{
            arr[i] = 0;
        }
    }
    return maxSum(arr,n,k);
}

int main()
{
    int arr[] = {28,2,3,6,496,99,8128,24};
    cout << maxNumberOfPerfects(arr,8,4);
    
    return 0;
}