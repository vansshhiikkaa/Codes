#include<iostream>
using namespace std;
int main()
{
    //int is 4 bytes = 32 bits range -2^31 to (2^31) - 1 
    //char is 1 byte = 8 bits
    int a;
    cout << "size of int " << sizeof(a) << "\n";
    //in bytes

    float b;
    cout << "size of float " << sizeof(b) << "\n";

    double c;
    cout << "size of double " << sizeof(c) << "\n";

    char d;
    cout << "size of char " << sizeof(d) << "\n";

    long int e;
    cout << "size of long int " << sizeof(e) << "\n";

    long long int g;
    cout << "size of long long int " << sizeof(g) << "\n";

    short int f;
    cout << "size of short int " << sizeof(f) << "\n";
    return 0;
}