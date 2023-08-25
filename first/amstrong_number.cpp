#include<iostream>
using namespace std;

int cube(int k)
{
    return k*k*k;
}

int main()
{
    int N,n;
    cin >> N;
    n = N;

    //for amstrong number sum of cube of every digit is digit itself.
    int k,csum = 0;
    while(n>0)
    {
        k = n%10;
        //k is last digit

        csum += cube(k); //pow(k,3) with #include <math.h>
        n /= 10;
    }
    if(csum == N) cout << "YES" << endl;
    else cout << "NO" << endl;



    
    return 0;
}