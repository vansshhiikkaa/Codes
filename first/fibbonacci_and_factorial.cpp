#include<iostream>
using namespace std;

void fib(int n){
    int t1=0;
    int t2 = 1;
    int nextterm;
    for(int i=0;i<n;i++)
    {
        cout << t1 << " ";
        nextterm = t1 + t2;
        t1 = t2;
        t2 = nextterm;
    }
    
    return ;
}
long long int fact(int n)
{
    if(n < 0) return -1;
    if(n == 0) return 1;
    int prod = 1;
    for(int i=1;i<=n;i++)
    {
        prod *= i;
    }
    return prod;
}

int main()
{
    int n;
    cin >> n;

    //fib(n);
   // cout << endl;
    cout << fact(n);

    
    return 0;
}