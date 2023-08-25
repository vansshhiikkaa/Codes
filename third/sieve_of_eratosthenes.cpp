#include<bits/stdc++.h>
using namespace std;

vector<int> primeSieve(int n)
{
    int prime[101] = {0};
    vector<int> b;
    for(int i=2;i<=n;i++){
        if(prime[i]==0){
            for(int j=i*i;j<=n;j+=i){
                prime[j]=1;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(prime[i]==0){
            b.push_back(i);
        }
        
    }
    return b;
}

//prime factorization using sieve
void primefactor(int n)
{
    int spf[n+1] = {0};
    for(int i=2;i<=n;i++)
    {
      spf[i] = i;
    }
    for(int i=2;i<=n;i++)
    {
        if(spf[i]==i){
            for(int j=i*i;j<=n;j+=i)
            {
                if(spf[j]==j)
                {
                    spf[j] = i;
                }
            }
        }
    }
    while(n!=1){
        cout << spf[n] << " ";
        n = n/spf[n];
    }
}


int main()
{
    int a;
    cin >> a;
    vector<int> g = primeSieve(a);
    for(int i=0;i<g.size();i++){
        cout << g[i] << " ";
    }
    cout << endl;
    primefactor(a);


    
    return 0;
}