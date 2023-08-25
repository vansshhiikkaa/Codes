#include<bits/stdc++.h>
using namespace std;
void incremental(int a)
{
    a++;
}
void incremental_(int *a)
{
    *a = *a + 1;
}
void swap_1(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
void swap_2(int *a ,int *b)
{
    int temp;
     temp = *a;
     *a = *b;
     *b = temp; 
}

int main()
{
    int a = 11;
    cout << a << endl;
    incremental(a);
    cout << a << endl; //doesn't changed can be done if we could pass the address of variable
    int b = 10;
    swap_1(a,b);
    cout << a << " " << b; //doesn't changed unless we use swap() as a inbuilt function
    cout << endl;
    int *aptr = &a;
    int *bptr = &b;
    swap_2(aptr,bptr);
    cout << a << " " << b;
    cout << endl;
    
    int x = 2, y = 4;
    swap_2(&x,&y); //done
    cout << x << " " << y << endl;

    int z = 5;
    incremental_(&z);
    cout << z;






    
    return 0;
}