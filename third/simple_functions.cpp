#include<bits/stdc++.h>
using namespace std;

int summation(int n)
{
    if(n == 0) return 0;
    return n + summation(n-1);
}
int product(int n,int k)
{
    if(k == 0) return 1;
    return n * product(n,k-1);
}
int factorial(int n)
{
    if(n == 0) return 1;
    return n * factorial(n-1);
}
int fibbonaci(int n)
{
    if(n==0 || n == 1) return n;
    return fibbonaci(n-1) + fibbonaci(n-2);
    
}

int main()
{
    cout << summation(100) << endl;
    cout << product(2,10) << endl;
    cout << factorial(10) << endl;
    cout << fibbonaci(7) << endl;



    
    return 0;
}