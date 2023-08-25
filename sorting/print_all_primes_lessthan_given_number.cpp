#include <iostream>

using namespace std;

int main()
{
    int n;
    int f1=0;
    cin >> n;
    for(int i=2;i<n;i++)
    {
        f1 = 0;
        for(int j=2;j<i;j++)
        {
            if(i%j == 0)
            {
                f1 = 1;
                break;
            }
        }
        if(f1 == 0) cout << i << " ";
    }

    return 0;
}
// #include <iostream>

// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int num = 2;
//     int divisor,flag=0;
//     while(num <= n)
//     {
//         divisor = 2;
//         flag = 0;
//         while(divisor < num)
//         {
//             if(num%divisor == 0)
//             {
//                 flag = 1;
                
//                 break;
//             }else{
//                 divisor++;
//             }
//         }
//         if(flag == 0) cout << num << " ";
//         num ++;
//     }

//     return 0;
// }
