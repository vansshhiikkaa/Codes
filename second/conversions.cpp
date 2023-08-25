#include<bits/stdc++.h>
using namespace std;

int decimal_to_baser(int n,int r)
{
    int baser=0,num,k=1;
    
    
    while(n>0)
    {
       num =  n%r;
       baser = baser + num*k;
        n = n/r;
        k = k*10;
        
    }
    return baser;
}
int baser_to_decimal(int n,int r)
{
     int number=0;
    int i=0;
    int k;
    while(n>0)
    {
        k=n%10;
        
        number += k*pow(r,i); 
        n /= 10;
        i++;
    }
    return number;
}
int main()
{
    
    int n;
    cin >> n;
    for(int i=2;i<=10;i++) cout << decimal_to_baser(n,i) << endl;
    int m,r;
    cin >> m >> r;
    cout << baser_to_decimal(m,r);


    return 0;
}