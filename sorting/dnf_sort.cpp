#include<bits/stdc++.h>
using namespace std;

//dutch national flag
void swap(int arr[],int i,int j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}

void dnfSort(int arr[],int n){
    int low=0;
    int mid=0;
    int high=n-1;

    while(mid<=high){
        if(arr[mid]==0){
            swap(arr,low,mid);
            low++; mid++;
        }else if(arr[mid]==1){
            mid++;
        }else{
            swap(arr,mid,high);
            high--;
        }
    }    
}

int main()
{
    int arr[]={1,1,2,0,0,1,2,2,1,0};
    dnfSort(arr,10);
    for(int i=0;i<10;i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}