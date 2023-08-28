#include<bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int,vector<int>> pq;
    pq.push(3);
    pq.push(1);
    pq.push(2);
    pq.push(3);

    cout << pq.top();
    pq.pop();
    cout << pq.top();

    priority_queue<int,vector<int>,greater<int>> pqm;

    pqm.push(3);
    pqm.push(1);
    pqm.push(2);
    pqm.push(3);

    cout << pqm.top();
    pqm.pop();
    cout << pqm.top();

    
    return 0;
}