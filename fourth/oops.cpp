#include<bits/stdc++.h>
using namespace std;

class student{
    string name; //private
    public:
    
    int age;
    bool gender;

    student(){
        cout<<"default constructor"<<endl;
    }//default constructor

    student(string s, int a, int g){
        cout<<"parameterised constructor"<<endl;
        name = s;
        age = a;
        gender = g;
    }// parameterised constructor

    student(student &a){
        cout<<"copy constructor"<<endl;
        name = a.name;
        age = a.age;
        gender = a.gender; 
    }

    ~student(){
        cout<<"destructor called"<<endl;
    }//called when we go out of main function


    void setName(string s){
        name=s;
    }//for accesing private data
    void getName(){
        cout<<name<<endl;
    }

    void printInfo(){
        cout<<"Name = ";
        cout<<name<<endl;
        cout<<"Age = ";
        cout<<age<<endl;
        cout<<"Gender = ";
        cout<<gender<<endl;
    }
    //operator overloading
    bool operator == (student &a){
        if(name==a.name && age==a.age && gender==a.gender){
            return true;
        }
        return false;
    }
};

int main()
{
    // student arr[3];
    // for(int i=0;i<3;i++){
    //     string s;
    //     cin>>s;
    //     arr[i].setName(s);
    //     cin>>arr[i].age;
    //     cin>>arr[i].gender;
    // }
    // for(int i=0;i<3;i++){
    //     arr[i].printInfo();
    // }
    student a("urvi",20,1);
    a.getName();

    a.printInfo();

    student b;

    student c = a;
    //c.age=40;

    if(c==a){
        cout<<"same"<<endl;
    }else{
        cout<<"not same"<<endl;
    }


    
    return 0;
}