#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    int currsum = 0;
    int maxsum = INT_MIN;
    for(int i=0;i<n;i++)
    {
        currsum += a[i];
        if(currsum<maxsum)
        {
            currsum = 0;
        }
        maxsum = max(maxsum,currsum);
    }
    cout << maxsum<<endl;

    
    return 0;
}