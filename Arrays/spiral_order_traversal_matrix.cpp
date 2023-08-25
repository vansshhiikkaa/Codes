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
    vector<int> b;
    //spiral order print
    int row_start = 0, row_end = n-1, column_start = 0, column_end = m-1;
    while(row_start <= row_end && column_start <= column_end)
    {
        //for row_start
        for(int col = column_start; col <= column_end;col++)
        {
              b.push_back(a[row_start][col]);
        }
        row_start++;

        //for column_end
        for(int row = row_start; row <= row_end;row++)
        {
            b.push_back(a[row][column_end]);
        }
        column_end--;

        //for row_end
        for(int col = column_end; col >= column_start;col--)
        {
              b.push_back(a[row_end][col]);
        }
        row_end--;

        //for column_start
       for(int row = row_end; row >= row_start;row--)
        {
            b.push_back(a[row][column_start]);
        }
        column_start++;

    }

    for(int i=0;i<b.size()-1;i++) cout << b[i] << " ";
    return 0;
}