#include<bits/stdc++.h>
using namespace std;

void solveleft(int arr[], int n){

    //arr[]= {1,2,3,4,5};
    int temp=arr[0];
    for(int i=1;i<n;i++){
        arr[i-1]=arr[i];            
    }// arr[]={2,3,4,5,5}
    arr[n-1]=temp;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }

}
void solveright(int arr[],int n){
    int temp= arr[n-1];
    for(int i=n-1;i>0;i--){ // 1 2 3 4 5
        arr[i]=arr[i-1];    // 1 1 2 3 4
    }
    arr[0]=temp;
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }


}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }                   // 1 2 3 4 5
    // solveleft(arr, n);  // 2 3 4 5 1
    solveright(arr, n); // 5 1 2 3 4 

}