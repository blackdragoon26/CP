#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int a[4];

    for(int i=0;i<4;i++){
        cin>>a[i];
    }
    int c=0;
    sort(a,a+4);
    for(int i=0; i<4; i++)
        if(a[i]!=a[i+1]){
            c++;}

    cout<<4-c;
}