#include<bits/stdc++.h>
using namespace std;
void subsets(char arr[],int n)
{
    for(int i=0;i<(1<<n);i++){
        for(int j=0;j<n;j++)
        {
            if(i & (1<<j))
            {
                cout << arr[j] << " ";
            }
        }
        cout << endl;
    }
}
int main()
{
    char arr[] = {'a','b','c'};
    subsets(arr,3);


    
    return 0;
}