#include<bits/stdc++.h>
using namespace std;

void optleftshift(int n, int d, int arr[]){

    d=d%n;
    // 1 2 3 4 5
    // 3 4 5 1 2    21 54321   21345
    int temp[d];
    for(int i=0;i<d;i++){
        temp[i]=arr[i];
    }
    reverse(temp, temp+d);

    reverse(arr+d,arr+n);
    for(int i=0;i<d;i++){
        arr[i]=temp[i];
    }
    reverse(arr, arr+n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
    
    
    }

int main(){

    int n;
    int d;
    cin>>n;
    cin>>d;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    optleftshift(n,d,arr);

}