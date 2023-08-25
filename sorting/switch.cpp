#include<iostream>
using namespace std;
int main(){
    //calculator
    int n1,n2;
    cout<<"numbers n1 and n2 are:";
    cin>>n1>>n2;

    char op;
    cout<<"operator is:";
    cin>>op;

    switch(op){
        case '*':
            cout << n1 * n2 << endl;
            break;
        
         case '/':
            cout << n1 / n2 << endl;
            break;
        
         case '+':
            cout << n1 + n2 << endl;
            break;
        
         case '-':
            cout << n1 - n2 << endl;
            break;
        
         
        default:
            cout<<"what?"<<endl;
        
    }


}