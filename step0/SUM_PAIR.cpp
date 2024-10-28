#include<iostream>
using namespace std;
int main(){

int arr[]={1,2,3,4,5,6};
int n = sizeof(arr)/sizeof(arr[0]);


for(int i =0;i<n;i++){
    for(int j=i+1;j<n;j++){
        int sum_pair=arr[i]+arr[j];
        cout<<sum_pair<<" ";
    }
}
for(int i =0;i<n;i++){
    for(int j=i+1;j<n;j++){
        cout<<arr[i][j]<<" ";
    }
cout<<endl;


}
}