#include<bits/stdc++.h>
using namespace std;

bool myCompare(pair<int,int>p1,pair<int,int>p2){
    return p1.first<p2.first;
}
int main()
{
    pair<int,char> pp;
    pp.first = 1;
    pp.second = 'f';

    //given an array assign value 0 to smallest element's index 
    //1 to second smallest and so on..
    int arr[]={10,16,7,14,5,3,12,9};
    vector < pair<int, int> > v;

    for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++){
        pair<int,int> p;
        p.first=arr[i];
        p.second=i;
        v.push_back(p);
        //v.push_back(make_pair(arr[i],i));
    }

    sort(v.begin(),v.end(),myCompare);

    for(int i=0;i<v.size();i++)
    {
        arr[v[i].second]=i;
    }

    for(int i=0;i<v.size();i++)
    {
       cout << arr[i] << " ";
    }



     


    
    return 0;
}