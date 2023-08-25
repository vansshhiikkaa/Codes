#include<bits/stdc++.h>
using namespace std;
int roman_to_integer(string s)
{
     map<char, int> symbols {
        {'M', 1000},
        {'D', 500},
        {'C', 100},
        {'L', 50},
        {'X', 10},
        {'V', 5},
        {'I', 1}
    };
    
    int num=0;
    for(int i=s.length()-1;i>=0;i--)
    {
        if(symbols[s[i]] > symbols[s[i-1]] && i!=0)
        {
            num += symbols[s[i]] - symbols[s[i-1]];
            i--;
        }
        else{
            num += symbols[s[i]];
        }
       
      
    }
   
    return num;
}
int check(int num)
{
    int array[] = {1,4,5,9,10,40,50,90,100,400,500,900,1000};
    for(int i=0;i<13;i++)
    {
        if(num<array[i])
        {
            return array[i-1];
        }
    }
    return array[12];
}
string integer_to_roman(int n)
{
    string s = "";
    map<int, string> symbols {
        {1000, "M"},
        {900, "CM"},
        {500, "D"},
        {400, "CD"},
        {100, "C"},
        {90, "XC"},
        {50, "L"},
        {40, "XL"},
        {10, "X"},
        {9, "IX"},
        {5, "V"},
        {4, "IV"},
        {1, "I"}
    };
    int something;
    while(n>0)
    {
        something = check(n);
        n -= something;
        s += symbols[something];
    }
    return s;
}
int main()
{
    string str;
    cin >> str ;
    cout << roman_to_integer(str) << endl;

    int n;
    cin >> n;
    cout << integer_to_roman(n);
    

    
    return 0;
}