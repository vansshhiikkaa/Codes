#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    //input should be a natural number excluding 1.
    int N,flag = 0;
    cin >> N;
    for(int i=2;i<N;i++)
    {
        if(N%i == 0)
        {
            flag = 1;
            cout << "Not Prime" ;
            break;
        }
    }
    if(flag == 0) cout << "Prime" ;

    //another way
    int n;
    cin>>n;

    bool f=0;

    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i == 0)
        {
            cout<< "Not Prime" <<endl;
            f=1;
            break;
        }
    }
    if(f==0)
    {
        cout<<"Prime"<<endl;
    }

    return 0;
}
