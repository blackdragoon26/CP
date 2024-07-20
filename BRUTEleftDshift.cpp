#include<bits/stdc++.h>
using namespace std;

void bruteleft(int n, int d, int arr[]){
    d=d%n;
    //n=size of array arr
    // d= shifted elements number
    int temp[d];
    // 1 2 3 4 5
    // 3 4 5 1 2 // d=2
    for(int i=0;i<d;i++){
        temp[i]=arr[i];

    }
    for(int i=0;i<n-d;i++ ){
        arr[i]=arr[i+d];
    }
    int o=0;
    for(int i=n-d;i<n;i++){
        arr[i]=temp[o];
        o++;
        }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }

}   

void bruteright(int n, int d, int arr[]){
    d=d%n;
    // 1 2 3 4 5 d=2
    // 4 5 1 2 3
    int o=0;
    int temp[d];
    for(int i=n-d;i<n;i++){
        temp[o]=arr[i];
        o++;
    }
   
    o=n-d-1;
    for(int i=n-1;i>n-d;i--){
        arr[i]=arr[o];
        o++; //   12123
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
    
        
    // for(int i=0;i<d;i++){
    //     arr[i]=temp[i];
    // }

    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<"\t";
    // }

    }
int main (){
    int n;
    cin>>n;
    int d;
    cin>>d;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // bruteleft(n,d,arr);// 12345 =(d=2)= 34512

    bruteright(n,d,arr);// 12345=(d=2)= 45123



}