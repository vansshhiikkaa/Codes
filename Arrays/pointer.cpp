#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a = 10;
    int* ptr;
    ptr = &a;
    cout << ptr <<endl; //address
    cout << a << endl; //variable
    cout << &a << endl; //address
    cout << *ptr << endl; //variable

    *ptr = 20;
    cout << *ptr << " " << a << endl; //*ptr can change the value of the variable
    
    ptr ++;
    cout << ptr << endl; //increased by 4 as int variable takes 4 bytes

    
    char c = '1';
    char* pt = &c;
    cout << pt << endl;
    pt++;
    cout << pt << endl; //increased by 1

    int arr[] = {10,20,30};
    cout << *arr << endl;
    cout << *arr + 2 << endl;
    cout << *(arr + 2) << endl; //see the difference
    int *aptr = arr;
    for(int i=0;i<3;i++)
    {
        cout << *aptr << " ";
        aptr ++;
    }
    cout << endl;
    for(int i=0;i<3;i++)
    {
        cout << *(arr+i)<< " ";
       // arr++; //illegal
        
    }
    cout << endl;

    //pointer to pointer
    ptr = &a;
    int** q = &ptr;
    cout << &ptr << endl;
    cout << *q << endl;
    cout << **q << endl;
    
    return 0;
}