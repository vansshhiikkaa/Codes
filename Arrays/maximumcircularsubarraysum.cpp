#include<bits/stdc++.h>
using namespace std;
int kadane(int a[],int n)
{
      int currsum = 0;
      int maxsum = INT_MIN;
      for(int i=0;i<n;i++)
      {
        currsum+=a[i];
        if(currsum<0)
        {
            currsum = 0;
        }
        maxsum = max(maxsum,currsum);
      }
      return maxsum;
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
    //max subarray sum = totalsum of array - sum of noncontributing elements
    int wrapsum;
    int nonwrapsum;
    nonwrapsum = kadane(a,n);

    int totalsum=0;
    for(int i=0;i<n;i++)
    {
        totalsum+=a[i];
        a[i] = -a[i];
    }
    wrapsum = totalsum + kadane(a,n);

    cout << max(wrapsum,nonwrapsum) << endl;
    
    return 0;
}