#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    //pyramids

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;

    for(int i=n;i>0;i--)
    {
        for(int j=i;j>0;j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i + j < (n - 1))
            {
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
    cout<<endl;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i>j)
            {
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
    //number triangle
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j>i)
            {
                cout<<" ";
            }
            else{
                cout<<i + 1;
            }
        }
        cout<<endl;
    }
    cout<<endl;
    
    //floyd's triangle
    int s=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j>i)
            {
                cout<<" ";
            }
            else{
                cout<<s++;
                
            }
        }
        cout<<endl;
    }
    cout<<endl;

    //butterfly pattern
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=2*n;j++)
        {
            if(j<=i || j > 2*n - i)
            {
                cout<<"* ";
            }
            else{
                cout<<"  ";
                
            }
        }
        cout<<endl;
    }
    

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=2*n;j++)
        {
            if(j < n - i + 2 || j > n + i - 1)
            {
                cout<<"* ";
            }
            else{
                cout<<"  ";
                
            }
        }
        cout<<endl;
    }
    //another way
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        int space = 2*n - 2*i;
        for(int j=1;j<= space;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
      for(int i=n;i>0;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        int space = 2*n - 2*i;
        for(int j=1;j<= space;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}