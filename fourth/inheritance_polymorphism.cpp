#include<bits/stdc++.h>
using namespace std;

class ApnaCollege{
    public:
    void fun(){
        cout<<"function with no arguement"<<endl;
    }
    void fun(int x){
        cout<<"int arguement"<<endl;
    }
    void fun(double x){
        cout<<"double arguement"<<endl;
    }
};

class Complex{
    private:
    int real, imag;
    public:
        Complex(int r=0, int i=0){
            real = r;
            imag = i;
        }
    Complex operator + (Complex const &obj){
        Complex res;
        res.imag = imag + obj.imag;
        res.real = real + obj.real;
        return res;
    }
    void display(){
        cout<<real<<"+i"<<imag<<endl;
    }
};

class base{
    public:
    virtual void print(){
        cout<<"this is the base class's print function"<<endl;
    }

    void display(){
        cout<<"this is base class's display function"<<endl;
    }
};

class derived: public base{
    public:
    void print(){
        cout<<"this is the derived class's print function"<<endl;
    }

    void display(){
        cout<<"this is derived class's display function"<<endl;
    }
    
};
int main()
{
    ApnaCollege obj;
    obj.fun();
    obj.fun(2);
    obj.fun(8.6);

    Complex c1(12,7),c2(6,7);
    Complex c3 = c1 + c2;
    c3.display();


    base *baseptr;
    derived d;
    baseptr = &d;

    baseptr -> print();
    baseptr -> display();


    
    return 0;
}