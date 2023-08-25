#include<bits/stdc++.h>
using namespace std;
int linearsearch(int a[],int n,int k)
{
    for(int i=0;i<n;i++)
    {
        if(a[i] == k) return i;
    }
    return -1;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    int key;
    cin >> key;
    cout << linearsearch(a,n,key);

    
    return 0;
}