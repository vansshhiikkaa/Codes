#include<bits/stdc++.h>
using namespace std;

int unique(int arr[],int n)
{
    int xorsum = 0;
    for(int i=0;i<n;i++)
    {
        xorsum = xorsum^arr[i];
    }
    return xorsum;
}
int setBit(int n, int pos) 
{
    return ((n & (1 << pos)) != 0);
}
void unique_2(int arr[], int n)
{
    int xorsum = 0;
    for (int i = 0; i < n; i++) {
    xorsum = xorsum ^ arr[i];
    }
    int tempxor = xorsum;
    int setbit = 0;
    int pos = 0;
    while (setbit != 1) {
    setbit = xorsum & 1;
    pos++;
    xorsum = xorsum >> 1;
    }
    int newxor = 0;
    for (int i = 0; i < n; i++) {
    if (setBit(arr[i], pos - 1)) {
    newxor = newxor ^ arr[i];
    }
    }
    cout << newxor << endl;
    cout << (tempxor ^ newxor) << endl;
}
int main()
{
    int a[] = {10980000,30000000,354634,4,500780000,4,500780000,10980000};
    unique_2(a,8);


    
    return 0;
}