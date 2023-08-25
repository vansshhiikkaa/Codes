#include<bits/stdc++.h>
using namespace std;

//reverse a string using recursion
void reverse_string(string s)
{
    if(s.length() == 0)  //base case
    return ;
    string ros = s.substr(1);
    reverse_string(ros);
    cout << s[0];
}

//replace pi with 3.14 in string
void replace_pi(string s)
{
    if(s.length() == 0)  //base case
    return ;
    if(s[0]=='p' &&s[1] == 'i')
    {
        cout << 3.14;
        replace_pi(s.substr(2));
    }else{
        cout << s[0];
        replace_pi(s.substr(1));
    }

}

//Tower of hanoi
void hanoi(int n,char src,char dest, char helper)
{
    if(n==0) return ;
    hanoi(n-1,src,helper,dest);
    cout << "Move from " << src << " to " << dest << endl;
    hanoi(n-1,helper,dest,src);
}

//remove all duplicates from the string
string removedup(string s)
{
    if(s.length() == 0) return "";
    char ch = s[0];
    string ans = removedup(s.substr(1));
    if(ch == ans[0])
    {
        return ans;
    }
    return (ch + ans);
}

//move all x to the end of the string
string movex(string s)
{
    if(s.length() == 0) return "";
    char ch = s[0];
    string ans = movex(s.substr(1));
    if(ch == 'x') return ans + ch;
    return ch + ans;

}

//generate all substrings
void subseq(string s,string ans)
{
    if(s.length()==0)
    {
        cout << ans << endl;
        return ;
    }

    char ch = s[0];
    string ros = s.substr(1);
    subseq(ros,ans);
    subseq(ros,ans+ch);
}

//generate substrings with ASCII codes
void subseq_ASCII(string s, string ans)
{
    if(s.length()==0)
    {
        cout << ans << endl;
        return ;
    }
    char ch = s[0];
    int code = ch;
    string ros = s.substr(1);
    subseq_ASCII(ros,ans);
    subseq_ASCII(ros,ans + ch);
    subseq_ASCII(ros,ans+to_string(code));
}

//keypad problem to print all possible words from phone digits
string keypadarr[] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void keypad(string s, string ans){
    if(s.length()==0)
    {
        cout << ans << endl;
        return ;
    }
    char ch = s[0];
    string code = keypadarr[ch - '0'];
    string ros = s.substr(1);

    for(int i=0;i<code.length();i++)
    {
        keypad(ros,ans + code[i]);
    }

}

int main()
{
    string s = "((((([{()}[]]{{{[]}}})))))";
    reverse_string(s);
    cout << endl;

    s = "sdfyguvpidhbcpipipi";
    replace_pi(s);
    cout << endl;

    hanoi(3,'A','B','C');
    
    s = removedup("aaaeeehh");
    cout << s << endl;

    cout << movex("asfxstyxfscxxeukxhxxxyucrhecxxxgxxx") << endl;

    subseq("abc","");
    cout << endl;

    subseq_ASCII("AB","");

    keypad("23","");
    
    return 0;
}