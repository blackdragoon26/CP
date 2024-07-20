#include <bits/stdc++.h>
using namespace std;

int main(){
    int nums[]={1,2,3,4,5,6,7};
    int k;
    cin>>k;
    
    int numssize= sizeof(nums)/sizeof(nums[0]);
    cout<<numssize;

     int n=k% numssize;
        int temp[n];
        int o=0;
        // int j=0;
        int j=numssize-n;

        for(int i=j;i>n;i++){
            temp[o]=nums[i];
            o++;

        }
        int p=1;
        for(int i=j-1;i>0;i-- ){
            nums[i]=nums[(numssize-p)];
            p++;
        }

        for(int i=0;i<n-1;i++){
            nums[i]=temp[i];
        }

        for(int i=0;i<n;i++){
            cout<<nums[i];
        }

}