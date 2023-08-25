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
int combination(int n,int r)
{
   return fact(n)/(fact(r)*fact(n-r));
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
int perm(int n,int r)
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
    return (num/din*fact(r));

}
int permutation(int n,int r)
{
    return fact(n)/fact(n-r);
}
int main()
{
    int n,r;
    cin >> n >> r;
    cout << permutation(n,r);
    cout << endl;
    cout << combination(n,r);
    cout << endl;
    cout << perm(n,r) << " " << comb(n,r) <<endl;

    
    return 0;
}