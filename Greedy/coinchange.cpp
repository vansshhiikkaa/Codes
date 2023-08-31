#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[] = {1,2,5,10,20,50,100,500,1000,2000};
    int x;
    cin >> x;
    int ans = 0;
    for(int i=9;i>=0;i--){
        ans += x/a[i];
        //x -= x/a[i] * a[i];
        x = x%a[i];
    }

    cout << ans;

    
    return 0;
}