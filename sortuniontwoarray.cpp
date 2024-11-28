// #include<bits/stdc++.h>
// using namespace std;

// // brute force is done via using ordered set and adding elements
// // from both arrays

// // time complexity: n1logn+ n2logn
// // Space Complexity: n1+n2

// int main(){
//     int a[]={2,3,3,4,4};

//     int b[]={2,2,3,7};

//     auto n1=size(a);
//     auto n2=size(b);

//     set<int> st;
//     for(int i=0;i<n1;i++){
//         st.insert(a[i]);
//     }
//     for(int i=0;i<n2;i++){
//         st.insert(b[i]);

//     }

//     for(auto p:st){
//         cout<<p;
//     }

// }

#include <bits/stdc++.h>
using namespace std;

// using optimal approach by two pointer, similar to merge sort
int main()
{
    int arr1[] = {1, 1, 1, 2, 3, 4, 5};
    int arr2[] = {2, 3, 4, 4, 5, 6};

    int n1 = size(arr1);
    int n2 = size(arr2);
    int i, j = 0;
    vector<int> unionArr;

    while (i < n1 && j < n2)
    {
        if (arr1[i] <= arr2[j])
        {

            if (unionArr.size() == 0||unionArr.back() != arr1[i])
            {
                unionArr.push_back(arr1[i]);
            }
            i++;
        }
        else
        {
            if (unionArr.size() == 0||unionArr.back() != arr2[j])
            {
                unionArr.push_back(arr2[j]);
            }
            j++;
        }
    }

    while (j < n2)
    {
        if (unionArr.size() == 0||unionArr.back() != arr2[j])
        {
            unionArr.push_back(arr2[j]);
        }
        j++;
    }
    while (i < n1)
    {
        if (unionArr.size() == 0||unionArr.back() != arr1[i])
        {
            unionArr.push_back(arr1[i]);
        }
        i++;

      
    }
    for (auto u : unionArr)
        {
            cout << u << "\t";
        }

    return 0;
    //time complexity : n1+n2
    //space complexity : (n1+n2)for only return the answer, not for any calculcation purpose 
}