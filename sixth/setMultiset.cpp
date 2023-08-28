#include<bits/stdc++.h>
using namespace std;

int main(){
    //Ordered set
    //set
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(2);
    s.insert(3);

    for(auto i:s) cout << i << " ";
    for(auto i=s.begin();i!=s.end();i++)
        cout << *i << " ";
    for(auto i=s.rbegin();i!=s.rend();i++)
        cout << *i << " ";

    set<int,greater<int>> ss;
    cout << *s.lower_bound(2.5);
    cout << *s.upper_bound(2);
    cout << (s.upper_bound(3)==s.end());

    s.erase(2);
    s.erase(s.begin());
    for(auto i:s) cout << i << " ";
    cout << endl;

    //multiset
    multiset<int> d;
    d.insert(1);
    d.insert(3);
    d.insert(3);
    d.insert(3);
    d.insert(5);
    d.erase(d.find(3));
    for(auto i:d) cout << i << " ";
    cout << endl;
    d.erase(3);
    for(auto i:d) cout << i << " ";
    cout << endl;

    //Unordered set
    unordered_set<int> f;
    f.insert(3);
    f.insert(5);
    f.insert(1);
    f.insert(3);
    f.insert(3);
    
    for(auto i:f) cout << i << " ";


    return 0;
}