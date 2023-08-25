#include<bits/stdc++.h>
using namespace std;
//given a 2Xn board and tiles  of size 2X1
int tilingways(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    return tilingways(n-1) + tilingways(n-2);
}

//friends pairing problem
//find ways in which n friends can remain single or can be paired up.
int friendspairing(int n)
{
    if(n==0 || n==1 || n==2)
    {
        return n;
    }
    return friendspairing(n-1) + friendspairing(n-2)*(n-1);
}
//0-1 knapsack problem
//put n items with given wieght and value in a knapsack of caapcity w to get the maximum total value in the knapsack
int knapsack(int value[],int wt[], int n, int W)
{
    if(n==0 || W==0)
    {
        return 0;
    }
    if(wt[n-1]>W)
    {
        return knapsack(value,wt,n-1,W);
    }

    return max(knapsack(value,wt,n-1,W-wt[n-1])+value[n-1],knapsack(value,wt,n-1,W));

}
int main()
{
    cout << tilingways(4);
    cout << endl;
    cout << friendspairing(4);
    cout << endl;
    int wt[] = {10,20,30};
    int val[] = {100,50,150};
    int W = 50;

    cout << knapsack(val,wt,3,W);

 
    return 0;
}