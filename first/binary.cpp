#include<iostream>
using namespace std;
int power(int x, int n)
{
    int p=1;
    for(int i=0;i<n;i++)
    {
        p = p*x;
    }
    return p;
}

int main()
{
    //decimal to binary
    int n;
    int binary=0,num,k=1;
    
    cin>>n;
    while(n>0)
    {
       num =  n%2;
       binary = binary + num*k;
        n = n/2;
        k = k*10;
        
    }
    cout<<binary<<endl;

    //binary to decimal
     cin>>n;
    int number=0;
    int i=0;
   
    while(n>0)
    {
        k=n%10;
        
        number += k*power(2,i); 
        n /= 10;
        i++;
    }
    cout<<number;
    

    
    return 0;
}