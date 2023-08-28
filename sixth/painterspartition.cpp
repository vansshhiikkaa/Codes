#include<bits/stdc++.h>
using namespace std;
int findFeasible(int boards[],int n,int limit){
    int painters=1,sum=0;

    for(int i=0;i<n;i++){
        sum += boards[i];
        if(sum > limit){
            sum = boards[i];
            painters++;
        }
    }
    return painters;
}

int painterPartition(int boards[],int n, int m){
    int totalLength=0,k=0;
    for(int i=0;i<n;i++){
        k=max(k,boards[i]);
        totalLength += boards[i];
    }
    int low = k,high = totalLength;
    while(low<high){
        int mid = (low+high)/2;
        int painters = findFeasible(boards,n,mid);
        if(painters<=m){
            high=mid;
        }else{
            low=mid+1;
        }
    }
    return low;
}
int main()
{
    int p[] = {10,20,30,40};
    cout << painterPartition(p,4,2);

    
    return 0;
}