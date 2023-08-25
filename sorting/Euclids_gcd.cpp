#include<iostream>
using namespace std;
int gcd(int A, int B) {
    int temp;
    if(A<B){
        temp = A;
        A = B;
        B = temp;
    }
    while(B>0)
    {
        temp = A%B;
        A = B;
        B = temp;
    }
    return A;
}
int main()
{
    int a,b;
    cin >> a >> b;
    cout << gcd(a,b) << endl;

    
    return 0;
}