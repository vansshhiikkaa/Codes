#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    char arr[n+1];
    cin >> arr;
    bool check = 1;
    for(int i=0;i<n;i++)
    {
        if(arr[i] != arr[n-i-1])
        {
            check = 0;
            break;
        }
    }
    if(check)
    {
        cout << "word is a palindrome";
    }else{
        cout << "word is not a palindrome";
    }
    return 0;
}