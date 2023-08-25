#include<bits/stdc++.h>
using namespace std;

int getBit(int n,int pos)
{
    return ((n & (1<<pos))!=0);
}

int setBit(int n,int pos)
{
    return (n | (1<<pos));
}

int clearBit(int n,int pos)
{
    return (n & (~(1<<pos)));
}
int updateBit(int n, int pos,int value)
{
    int c = n & (~(1<<pos));
    return (c | (value<<pos));
}
int main()
{
    cout << getBit(5,2) << endl;
    cout << setBit(5,1) << endl;
    cout << clearBit(5,2) << endl;
    cout << updateBit(5,1,1);

    
    return 0;
}