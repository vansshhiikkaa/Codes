#include<bits/stdc++.h>
// #include<iostream>
// #include<climits>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int minno=INT_MAX;
    int maxno=INT_MIN;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        maxno = max(a[i],maxno);
        minno = min(a[i],minno);
    }
    cout << "min=" << minno << endl;
    cout << "max=" << maxno << endl;
    
    

    
    return 0;
}