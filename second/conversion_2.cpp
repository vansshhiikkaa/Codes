#include<bits/stdc++.h>
using namespace std;

void reverse(string& str)
{
    int n = str.length();
 
    // Swap character starting from two
    // corners
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}
int baser_to_decimal(string n,int r)
{
    int s = n.size();
    int k=1;
    int number=0;
    for(int i=s-1;i>=0;i--)
    {
        if(n[i] <= '9' && n[i] >= '0')
        number = number + (n[i] - 48)*k;
        else number = number + (n[i] - 65 + 10)*k;
        //since we will rather introduce ABCDE...
        k = k*r;
    }
    return number;
}
string decimal_to_baser(int n,int r)
{
    string baser= "";
    int num;
    
    
    while(n>0)
    {
       num =  n%r;
       if(num <= 9) baser = baser + to_string(num);
       else{
        char c = 'A';
        c = c + num - 10;
        baser.push_back(c);

       }
       
        n = n/r;
       
    }
    reverse(baser); 
    return baser;
}
int main()
{
    string m;
    int rr;
    cout << "m=";
    cin >> m ;
    cout << "r=";
    cin >> rr;
    cout << baser_to_decimal(m,rr) << endl;
    int n;
    int r;
    cout << "n=";
    cin >> n ;
    cout << "r=";
    cin >> r;
   
    cout << decimal_to_baser(n,r);

    
    return 0;
}