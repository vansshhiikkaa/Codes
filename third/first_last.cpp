#include<bits/stdc++.h>
using namespace std;

//check if the given rray is sorted or not
bool sortedarray(int a[],int n)
{
    if(n==1)
    {
        return true;
    }
    bool restarray = sortedarray(a+1,n-1);
    return (a[0] < a[1] && restarray);
}
//print numbers upto n in decreasing order
void dec(int n)
{
    if(n==0)
    {
        return ;
    }
    cout << n << endl;
    dec(n-1);
}

//in decreasing order
void inc(int n)
{
    if(n==0)
    {
        return ;
    }
    inc(n-1);
    cout << n << endl;
}
//first occurence of key in an array
firstocc(int arr[],int n, int i, int key)
{
    if(i==n)
    {
        return -1;
    }
    if(arr[i] == key)
    {
        return i;
    }
    return firstocc(arr,n,i+1,key);
}
//last occurence of key in an array
lastocc(int arr[],int n, int i, int key)
{
    if(i==n)
    {
        return -1;
    }
    int restarray = lastocc(arr,n,i+1,key);
    if(restarray!=-1)
    {
        return restarray;
    }
    if(arr[i]==key)
    {
        return i;
    }
    return -1;
}

int main()
{
    int arr[] = {1,2,3,4,5};
    cout << sortedarray(arr,5) << endl;
    // dec(10);
    // inc(10);
    int a[] = {4,2,1,5,6,7,2,5};
    cout << firstocc(a,8,0,2) << " " << lastocc(a,8,0,2) << endl;



    
    return 0;
}