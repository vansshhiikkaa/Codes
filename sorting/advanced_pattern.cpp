#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "n=";
    cin>>n;
    //inverted pattern
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i + j > n + 1)
            {
                cout<<" ";
            }
            else{
                cout<<j;
            }
        }
        cout<<endl;
    }
    cout<<endl;

    //0-1 pattern
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i>=j && (i-j)%2 == 0)
            {
                cout<<"1";
            }
            else if(i>=j){
                cout<<"0";
            }
        }
        cout<<endl;
    }
    cout<<endl;

    //rhombus pattern
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        { 
         cout<<" "; 
        }
        for(int j=1;j<=n;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
    
    //number pattern
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        { 
         cout<<" "; 
        }
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    //palindromic pattern
    for(int i=1;i<=n;i++)
    {
        int k=i;
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(int j=i;j>=1;j--)
        {
            cout<<k--;
            
        }
        k++;
        k++;

        for(int j=2;j<=i;j++)
        {
            cout<<k++;
        }
        cout<<endl;
    }
    cout<<endl;
    
    //star pattern
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<"  ";
        }
        for(int j=1;j<=2*i - 1;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<"  ";
        }
        for(int j=1;j<=2*i - 1;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    //zig-zag pattern
    int m;
    cout<<"m=";
    cin>>m;
    for(int i=1;i<=3;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(i==1)
            {
                if(j%4 == 3) cout<<"*";
                else cout<<" ";
            }
            else if(i==2)
            {
                if(j%2 == 0) cout<<"*";
                else cout<<" ";
            }
            else{
                if(j%4 == 1) cout<<"*";
                else cout<<" ";
            }
        }
        cout<<endl;

    }
    //another way
    for(int i=1;i<=3;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(((i+j)%4 == 0 )|| (i==2 && j%4 == 0)) cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;

    }

    return 0;
}