#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int sum=0;
    

    while(n>0)
    {
        sum = 0;
     for(int i=1;i<=n;i++)
     {
        sum = sum + i;
     }
     cout<<sum<<endl;

        
     cin>>n;
        
    }


    return 0;
}