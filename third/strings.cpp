#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    cout << str << endl; //first word of input

    string str1(5,'n');
    cout << str1 << endl; //nnnnn

    string str2 = "well done";
    cout << str2 << endl; //well done
    
    //want to input with spaces
    string str3;
    getline(cin,str3);
    cout << str3 << endl; //whole sentence of input

    string s1 = "fam";
    string s2 = "ily";
    cout << s1 + s2 << endl; //family
    s1.append(s2);
    cout << s1 << endl;
    cout << s1[2] << endl; //m

    s2.clear();
    cout << s2 << endl; // 
    if(s2.empty()) cout << "string is empty" << endl; //string is empty

    string s3 = "abc",s4 = "abc",s5 = "abz";
    cout << s3.compare(s4) <<endl; //zero for same strings // 0
    cout << s3.compare(s5) << endl; //non zero for different strings // -1

    s5.erase(1,2);
    cout << s5 << endl; //a
    cout << s4.find("bc") << endl; //1

    s3.insert(2,"lol");
    cout << s3 << endl; //ablolc

    cout << s3.size() << endl; //6

    for(int i=0;i<s3.length();i++) cout << s3[i] << " " ; //a b l o l c
    cout << endl;

    string s6 = s3.substr(2,3);
    cout << s6 << endl; //lol

    string s7 = "786";
    int x = stoi(s7);
    cout << x+2 << endl; //788

    s7 = to_string(x) + "0";
    cout << s7 << endl; //7860

    string s8 = "sfgyADZHGXewveycds";
    sort(s8.begin(),s8.end());
    cout << s8 << endl; //ADGHXZcdeefgssvwyy





    
    return 0;
}