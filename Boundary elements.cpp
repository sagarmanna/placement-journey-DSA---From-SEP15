

// boundary elements in 2d matrix 











#include<iostream>
using namespace std;
 int main(){



int arr[4][4]={{1,2,3,4},{5,6,7,8},{6,7,8,9}};
int row =sizeof(arr)/sizeof(arr[0]);

int col=sizeof(arr[0])/sizeof(arr[0][0]);
for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        if(i==0|| j==0 || i==row-1 || j==col-1){
            cout<<arr[i][j]<<" ";
        }
    }
}

 }