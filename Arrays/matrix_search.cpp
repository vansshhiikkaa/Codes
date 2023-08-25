#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin >> a[i][j];
        }
    }
    int target;
    cin >> target;
    int r = 0, c = m - 1;
    bool found = false;
    while(r<n && c>=0)
    {
        if(a[r][c] == target)
        {
            found = true;
        }
        if(a[r][c] > target)
        {
            c--;
        }else r++;
    }
    if(found) cout << "element found";
    else cout << "element not found";
    return 0;
}