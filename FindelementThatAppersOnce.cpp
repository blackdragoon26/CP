#include <bits/stdc++.h>
using namespace std;

int main()

// brute force
// {
//     int arr[] = {1, 2, 4}; // array size = n-1
//     int n = 4;

//     // to find the element that appears once
//     for (int i = 1; i <= n; i++)
//     {
//         int flag = 0;
//         for (int j = 0; j < n - 1; j++)
//         {
//             {
//                 if (arr[j] == i)
//                 {
//                     flag = 1;
//                     break;
//                 }
//             }
//         }

//         if (flag == 0){
//             return i;
//         }
//     }
// }


//better optimized solution
// {
//     int arr[] = {1, 2, 4}; // array size = n-1
//     int n = 4;
//     int hasha[n+1] = {0};
//     for(int i=0;i<n-1;i++){
//         hasha[arr[i]]++;
//     }
//     for(int i=1;i<=n;i++){
//         if(hasha[i]==0){
//             cout<< i;
//     }
// }
// }

//optimal solution
// {
//     int arr[] = {1, 2, 4}; // array size = n-1
//     int n = 4;
//     int sum=n*(n+1)/2;
//     int s2=0;
//     for(int i=0;i<n-1;i++){
//         s2+=arr[i];
//     }
//     cout<<sum-s2;

// }

//xor optimal approach
// {
//     int arr[] = {1, 2, 4}; // array size = n-1
//     int n = 4;
//     int xor1=0;
//     int xor2=0;
//     for(int i=1;i<=n;i++){
//         xor1=xor1^i;
//     }
//     for(int j=0;j<n-1;j++){
//         xor2=xor2^arr[j];
//     }

//     int p=xor1^xor2;
    
//     cout<<p;

// }

//much better xor approach with single loop for O(n) complexity
{
    int arr[] = {1, 2, 4}; // array size = n-1
    int n = 4;
    int xor1=0;
    int xor2=0;
    for(int i=0;i<n-1;i++){
        xor2=xor2^arr[i];

        xor1=xor1^(i+1);

    }
   
    
    int p=xor1^xor2;
     cout<<p;
    

}