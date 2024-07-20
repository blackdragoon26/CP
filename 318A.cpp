// // // #include <bits/stdc++.h>
// // #include <iostream>
// // #include <vector>
// // using namespace std;

// // int main()
// // {

// //     int n, k;
// //     cin >> n;
// //     cin >> k;

// //     vector<int> eve;
// //     vector<int> odd;

// //     for (int i = 1; i <= n; i++)
// //     {

// //         if (i % 2 != 0)
// //         {
// //             odd.push_back(i);
// //             // m++;
// //         }
// //         else
// //         {
// //             eve.push_back(i);
// //             // l++;
// //         }
// //     }

// //     if (k > odd.size())
// //     {
// //         cout << eve[(k - odd.size() - 1)];
// //     }
// //     else
// //     {
// //         cout << odd[k - 1];
// //     }

// //     return 0;
// // }


// #include<iostream>
// using namespace std;

// int main(){
//      int n,k;
//      cin>>n;
//      cin>>k;
     
//      int arr[n];
//      int odd=0;
//      int eve=1;

//      for(int i=0;i<(n+1)/2;i++){
//         arr[i]=2*odd+1 ;
//         odd++;    }

//     for(int j=(n+1)/2;j<n;j++){
//         arr[j]=2*eve ;
//         eve++; }

//     cout<<arr[k-1];

    


//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,k;
    cin>>n;
    cin>>k;
    if(k<=(n+1)/2){
        cout<<k*2-1;
    }
    else{
        cout<<(k-(n+1)/2)*2;

    }


}