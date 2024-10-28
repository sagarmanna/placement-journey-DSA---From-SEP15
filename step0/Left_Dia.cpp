#include<iostream>
using namespace std;
int main(){
    

int arr[3][3]={{1,2,3},{4,5,6}{7,8,9}};
int row =sizeof(arr)/sizeof(arr[0]);
int col=sizeof(arr[0]/sizeof(arr[0][0]));

int left_dif_sum=0;
int right_dig_sum=0;

for(int i =0; i<row;i++){
    for(int j=0;j<col;j++){
        if(i==j){
            left_dig_sum+=arr[i][j];
        }
    }
}
for(int i =0; i<row;i++){
    for(int j=0;j<col;j++){
        if(i+j==row-1){
            right_dig_sum+=arr[i][j];
        }
    }
}
cout<<left_dig_sum<<" "<<right_dig_sum;
}