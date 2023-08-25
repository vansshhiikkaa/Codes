#include<bits/stdc++.h>
using namespace std;
int countpath(int s,int e)
{
    if(s==e) return 1;
    if(s>e) return 0;

    int count = 0;
    for(int i=1;i<=6;i++)
    {
        count += countpath(s+i,e);
    }
    return count;
}

//paths in a maze (i,j) to (n,m)
int countpathmaze(int n,int m, int i, int j)
{
    if(i==n-1 && j==m-1)
    {
        return 1;
    }
    if(i>=n || j>=m)
    {
        return 0;
    }

    return countpathmaze(n,m,i+1,j) + countpathmaze(n,m,i,j+1);
}

int main()
{
    cout << countpath(0,3);
    cout << endl;
    cout << countpathmaze(3,3,0,0);

    
    return 0;
}