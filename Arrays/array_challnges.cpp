#include<bits/stdc++.h>
using namespace std;
//finding the maximum element
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    int mx = INT_MIN;
    for(int i=0;i<n;i++)
    { 
        mx = max(mx,a[i]);
        cout << mx << " ";
    }
    cout << endl;

    
    return 0;
}