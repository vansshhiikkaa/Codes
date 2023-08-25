#include<bits/stdc++.h>
//#include<iostream>
//#include<string>
//#include<algorithm>

using namespace std;

int main()
{
    string s = "efwubctrcyusjxvtrybchdennnnnnnnnnnnxasml";
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout<< s << endl;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout<< s << endl;

    string ss = "3426965385";
    sort(ss.begin(),ss.end(),greater<int>());
    cout << ss << endl;

    int count[26];
    for(int i=0;i<26;i++) count[i]= 0;
    for(int i=0;i<s.size();i++)
    {
        count[s[i]-'a']++;
    } 
    char ans;
    int mx = 0;
    for(int i=0;i<26;i++)
    {
        if(count[i]>mx)
        {
            mx = count[i];
            ans = i +'a';
        }
    }
    cout << ans << " " << mx << endl;

    


    
    return 0;
}