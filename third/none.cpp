#include<bits/stdc++.h>
using namespace std;

// vector<int> primeSieve(int n)
// {
//     int prime[101] = {0};
//     vector<int> b;
//     for(int i=2;i<=n;i++){
//         if(prime[i]==0){
//             for(int j=i*i;j<=n;j+=i){
//                 prime[j]=1;
//             }
//         }
//     }
//     for(int i=2;i<=n;i++){
//         if(prime[i]==0){
//             b.push_back(i);
//         }
        
//     }
//     return b;
// }
// vector<int> Pairsum(int a[],int n, int k)
// {
//     int low = 0;
//     int high = n - 1;
//     while(low<high)
//     {
//         if(a[low]+a[high] == k)
//         {
//             cout << low << " " << high <<endl;
//             return true;
//         }else if(a[low] + a[high]>k)
//         {
//             high--;
//         }else{
//             low++;
//         }
//     }
//     return false;
// }
int main()
{
    

    int n;
    int k;
    int sum = 0;
    int p=1;
   cin >> n;
   while(n>0)
   {
       k = n%10;
       sum += k;
       p *= k;
       n = n/10;
       
       
   }
   cout << sum << " " << p << endl;



    
    return 0;
}