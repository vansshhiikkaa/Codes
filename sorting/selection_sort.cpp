#include<bits/stdc++.h>
using namespace std;
void selectionsort(int a[],int n)
{
    int temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[i]){ 
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
                }
        }
    }
    return ;

}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    
    selectionsort(a,n);

    for(int i=0;i<n;i++) cout << a[i] << " ";

    
    return 0;
}
