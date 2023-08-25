#include<bits/stdc++.h>
using namespace std;
int summation(int n)
{
    int sum = 0;
    for(int i=1;i<=n;i++)
    {
        sum += i;
    }
    return sum;
}
int summation2(int n)
{
    if(n%2 == 0) return (n/2)*(n+1);
    else return ((n+1)/2)*n;
}
bool check_pythagorianTriplet(int x,int y,int z)
{
    int a = max(x, max(y,z));
    int b,c;
    if(a == x)
    {
        b = y;
        c = z;
    }else if(a == y)
    {
        b = x;
        c = z;
    }else{
        b = x;
        c = y;
    }
    if(a*a == b*b + c*c) return true;
    else return false;
}

int32_t main()
{
    // int n;
    // cout << "n=";
    // cin >> n;
    // cout << summation(n) << endl;
    // cout << summation2(n) << endl;

    // int a,b,c;
    // cin >> a >> b >> c;
    // if(check_pythagorianTriplet(a,b,c)) cout << "Yes these are";
    // else cout << "not";


    
    return 0;
}