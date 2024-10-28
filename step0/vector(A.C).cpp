#include<iostream>
#include<vector>
using namespace std;
int linearSearch(int arr,int sz){
  for(int i=0;i<sz;i++){
    if(arr[i]==target){

    
    return i;
    }
  }
  return -1;
};

int main(){

int arr[]={5,9,3,7,9,8};
int sz=7;
int target=4;
int linearSearch(arr,sz,target);
cout<<linearSearch(arr,sz,target)<<endl;
return 0;
}
// int marks[5]={55,66,77,34,55};

// //int size=5;
// for(int i =0;i<5;i++){
//     cout<<marks[i]<<" ";
// }
//     return 0;

// int nums[]={4,66,54,33,22,44};
// int INT_MAX;
// int INT_MIN;
// int size=6;
// int smallest=INT_MAX;
// int largest=INT_MIN;
// for(int i=0;i<size;i++){
//       smallest =  min( nums[i],smallest);
//     largest=max(nums[i],largest);
// }

// cout<<smallest<<endl;
// cout<<largest<<endl;



