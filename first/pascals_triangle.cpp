#include<iostream>
using namespace std;

int fact(int n)
{
     if(n == 0) return 1;
    int prod = 1;
    for(int i=1;i<=n;i++)
    {
        prod *= i;
    }
    return prod;
}

int comb(int n, int r)
{
    int num=1,din=1;
    for(int i=n;i>n-r;i--)
    {
        num *= i;
    }
    for(int i=2;i<=r;i++)
    {
        din *= i;
    }
    return num/din;

}
int main()
{
    int n;
    cin >> n;
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            if (j<=i/2) cout << comb(i,j) << " ";
            else cout << comb(i,i - j) << " ";
        }
        cout << endl;
    }
    cout << endl;

    
    return 0;
}