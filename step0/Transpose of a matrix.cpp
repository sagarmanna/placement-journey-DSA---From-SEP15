#include<iostream>
using namespace std;
int main(){


int arr[][]={{1,2,3},{4,5,6},{7,8,9}};
int row=sizeof(arr)/sizeof(arr[0]); 
for(int i=0;i<row;i++){
    for(int j =0;j<col;j++){
        arr[i][j]=arr[j][i];
    }
}
for(int i=0;i<row;i++){
    for(int j =0;j<col;j++){
        cout<<arr[i][j]<<" ";
        }
    cout<<endl;
}

}                                                                             







