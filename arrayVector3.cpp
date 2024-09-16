#include<iostream>
#include<vector>
using namespace std;
int main(){

// 
vector<int>v;
v.push_back(10);
cout<<"size is = "<<v.size()<<", "<<"capacity is ="<<v.capacity()<<endl;
v.push_back(15);
cout<<"size is = "<<v.size()<<", "<<"capacity is ="<<v.capacity()<<endl;
v.push_back(20);
cout<<"size is = "<<v.size()<<", "<<"capacity is ="<<v.capacity()<<endl;

}