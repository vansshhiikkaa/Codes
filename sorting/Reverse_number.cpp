#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int k,reverse = 0;
    while(n>0)
    {
        k = n%10;
        reverse = reverse*10 + k;

        n /= 10;

    }
    cout <<  reverse << endl;

    
    return 0;
}