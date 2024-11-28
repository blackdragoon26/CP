#include<bits/stdc++.h>
using namespace std;
int main()

//simple wala
{   
    int arr[]={1,1,0,1,1,1,0,1,1};
    int counter=0;
    int max=0;
    for(int i=0;i<(sizeof(arr));i++){
        if(arr[i]==1){
            counter++;
            if(max<counter){
                max=counter;
            }
        }

        else{
            counter=0;
        }

    }
    cout<<max;
}