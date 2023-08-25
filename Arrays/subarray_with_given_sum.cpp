#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,s;
    cin>> n >> s;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    //bruteforce approach with time complexity O(n^2)
    int curr = 0;
    int starting,ending;
    for(int i=0;i<n;i++)
    {
        curr = 0;
        for(int j=i;j<n;j++)
        {
            curr += a[j];
            if(curr == s) 
            {
                starting = i;
                ending = j;

            }

        }
    }
    cout << starting + 1 << " " << ending + 1 << endl;

    //optimised approach
    int i=0,j=0,st = -1,en = -1,sum = 0;
    while(j<n && sum+a[j] <=s)
    {
        sum += a[j];
        j++;   
    } 
    if(sum == s)
    {
        cout << i+1 << " " << j <<endl;
        return 0;
    }
    while(j<n)
    {
        sum += a[j];
        while(sum > s)
        {
            sum -= a[i];
            i++;
        }
        if(sum == s)
        {
            st = i+1;
            en = j+1;
            break;
        }
        j++;
    }
    cout << st << " " << en << endl;
    return 0;
}