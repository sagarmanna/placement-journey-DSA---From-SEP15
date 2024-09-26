#include<iostream>
#include<algorithm>

using namespace std;
int main(){

    int arr1[]={2,3,4,5};
    int arr2[]={5,6,7,8};
    int n=sizeof(arr1)/sizeof(arr1[0]);
    int m=sizeof(arr2)/sizeof(arr2[0]);
int mx=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int pair_sum=arr1[i]+arr2[j];
            mx = max(mx,pair_sum);
        }
    }
    cout<<mx;
}