//  #include<bits/stdc++.h>
//  using namespace std;

// //  brute force of intersection of two arrays;
// int main(){
//     int a[]={1,1,1,2,3,4};
//     int b[]={3,4};
//     auto n=size(a);
//     auto m=size(b);
//     vector<int> ans;
//     int vis[m]={0};
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(a[i]==b[j] && vis[j]==0){
//                 ans.push_back(a[i]);
//                 vis[j]=1;
//                 break;
//             }
//             if(b[j]>a[i]) break;
//         }
//     }

//     for(int w:ans)
//     {
//         cout<<w<<" ";
//     }
//     return 0;

//     // time complexity is m*n
//     // space complexity is n
// }




// optimal using two pointer approach;

#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[]={1,2,3,3};
    int b[]={1,1,1,2,2};
    auto n=size(a);
    auto m=size(b);
    int i=0;
    int j=0;
    vector<int> ans;
    while(i<n || j<m){
        if(a[i]==b[j]){
            ans.push_back(a[i]);
            i++;
            j++;

        }
        else if(a[i]<b[j]){
            i++;
        }
        else if(a[i]>b[j]){
            j++;
        }

    }
    for(auto q:ans){
        cout<<q<<" ";
    }
}