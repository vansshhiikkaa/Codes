#include<bits/stdc++.h>
using namespace std;
bool iscycle(int s,vector<vector<int>> &adj,vector<bool> &vis,vector<int> stack){
    stack[s] = 1;
    vis[s] = true;
    for(auto i:adj[s]){
            if(vis[i]){
                return true;
            }if(!vis[i] and iscycle(i,adj,vis,stack)){
                return true;
            }
            if(stack[i]) return true;
        
    }
    stack[s] = 0;
    return false;
}
int main()
{
    int n,m;cin>>n>>m;
    vector<vector<int>> adj(n);
    for(int i=0;i<n;i++){
        int u,v;cin>>u>>v;
        adj[u].push_back(v);
    }
    bool cycle = false;
    vector<int> stack(n,0);
    vector<bool> vis(n,false);
    for(int i=0;i<n;i++){
        if(!vis[i] and iscycle(i,adj,vis,stack)){
            cycle=true;
        }
    }
    if(cycle) cout << "cycle is present";
    else cout << "not present";

    
    return 0;
}