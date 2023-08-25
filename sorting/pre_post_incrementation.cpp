#include<iostream>
using namespace std;

int main()
{
    int i=1;
    int j=2;
    int k;
        //1 //2 //1   //2   //3   //4
    k = i + j + i++ + j++ + ++i + ++j;
    //13
    cout << i << " " << j << " " << k << endl;

    int f=0;
        //0   //0   //1    //1
    f = f++ - --f + ++f - f--;
    //0
    cout<<f<<endl;
    



    return 0;
}