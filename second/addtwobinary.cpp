#include<bits/stdc++.h>
using namespace std;
void reversestr(string& str)
{
    int n = str.length();
 
    // Swap character starting from two
    // corners
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}
string addbinary(int a,int b)
{
    int ans=0;
    int prevcarry = 0;
    while(a>0 && b>0)
    {
        if(a%2 == 0 && b%2 == 0)
        {
            ans = ans*10 + prevcarry;
            prevcarry = 0;
        }
        else if((a%2 == 0 && b%2 != 0) || (a%2 != 0 && b%2 == 0) )
        {
            if(prevcarry == 1)
            {
                ans = ans*10 + 0;
                prevcarry = 1;
            }else{
                ans = ans*10 + 1;
                prevcarry = 0;
            }
        }else{
            ans = ans*10 + prevcarry;
            prevcarry = 1;
        }
        a /= 10;
        b /= 10;
    }
    while(a>0)
    {
        if(prevcarry == 1){
            if(a%2 == 1)
            {
                ans = ans*10 + 0;
                prevcarry = 1;
            }else{
                ans = ans*10 + 1;
                prevcarry = 0;
            }
        }else{
            ans = ans*10 + (a%2);
        }
       a /= 10;
    }
     while(b>0)
    {
        if(prevcarry == 1){
            if(b%2 == 1)
            {
                ans = ans*10 + 0;
                prevcarry = 1;
            }else{
                ans = ans*10 + 1;
                prevcarry = 0;
            }
        }else{
            ans = ans*10 + (b%2);
        }
       b /= 10;
    }
    if(prevcarry == 1) ans = ans*10 + 1;
    string v = "";
    v = v + to_string(ans);
    reversestr(v);
    return v;


}
int main()
{
    int a,b;
    cin >> a >> b;
    cout << addbinary(a,b);


    
    return 0;
}