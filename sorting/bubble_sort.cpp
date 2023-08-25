#include<bits/stdc++.h>
using namespace std;
void bubblesort(int a[],int n)
{
     int counter = 1;
    int temp;
    while(counter < n)
    {
        for(int i=0;i<n-counter;i++)
        {
            if(a[i]>a[i+1])
            {
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;

            }
        }
        counter++;
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
     bubblesort(a,n);
    for(int i=0;i<n;i++) cout << a[i] << " ";

    
    return 0;
}