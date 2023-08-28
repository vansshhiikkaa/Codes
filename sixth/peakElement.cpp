#include<bits/stdc++.h>
using namespace std;

int_least16_t findPeakElement(int arr[],int low, int high, int n){
    int mid = low + (high - low)/2;

    if((mid==0 || arr[mid-1]<=arr[mid]) && (mid==n-1 || arr[mid+1]<=arr[mid])){
        return mid;
    }else if(mid>0 && arr[mid-1]>arr[mid]){
        return findPeakElement(arr,low,mid,n);
    }else{
        return findPeakElement(arr,mid+1,high,n);
    }
}

int main()
{
    int arr[] = {0,6,8,5,7,9};
    int n = 6;
    cout << findPeakElement(arr,0,5,n);

    
    return 0;
}