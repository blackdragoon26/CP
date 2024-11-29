#include<bits/stdc++.h>
using namespace std;
int main()
//brute force
// {
//     int arr[]={1,1,2,3,3,4,4};
//     int n=sizeof(arr)/sizeof(int);
    

//     for(int i=0;i<n;i++){
//         int count=0;
//         int num=arr[i];
//         for(int j=0;j<n;j++){
//             if(arr[j]==num){
//                 count++;
//             }
//         }
//         if(count==1){
//             cout<<num;
//             break;
//         }

//     }

// }

//optimal solution using hashing
// {
    
//      int arr[]={1,1,2,3,3,4,4};
//      int n=sizeof(arr)/sizeof(int);
//      int maxi=0;
//      for(int i=0;i<n;i++){
//         maxi=max(maxi,arr[i]);
//      }
//      int hasha[maxi]={0};
//      for(int i=0;i<n;i++){
//         hasha[arr[i]]++;
//      }
//      for(int i=0;i<maxi;i++){
//         if(hasha[i]==1){
//             cout<<i;
//             break;
//         }
//      }
// }


//better solution using mapping
// {
//     int arr[]={1,1,2,3,3,4,4};
//     int n=sizeof(arr)/sizeof(int);
//     map<int,int> mpp;
//     for(int i=0;i<n;i++){
//         mpp{arr[i]}++;
//     }

// }

// optimal solution using xor
{
    int arr[]={1,1,2,3,3,4,4};
    int n=sizeof(arr)/sizeof(int);
    int xor1=0;
    for(int i=0;i<n;i++){
        xor1=xor1^arr[i];
        cout<<"vskhbsr";
        //once jkvweb
    }
    cout<<xor1;

}