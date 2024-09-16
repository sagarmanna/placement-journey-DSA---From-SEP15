#include<iostream>
#include<vector>
#include<bits/stdc++.h>
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


for(auto it=v.begin();it !=v.end();it++){
    cout<<*it<<" ";
}
v.pop_back();
cout<<endl;
for(auto it=v.begin();it !=v.end();it++){
    cout<<*it<<" ";
}
v.erase(v.begin()+0);
cout<<endl;
for(auto it=v.begin();it !=v.end();it++){
    cout<<*it<<" ";
}
v.insert(v.begin(),5);
cout<<endl;
for(auto it=v.begin();it !=v.end();it++){
    cout<<*it<<" "<<endl;
}
cout<<">>>>>>>>>>>>>>>>>>>>>>"<<endl;
v.push_back(23);
v.push_back(12);
v.push_back(13);
v.push_back(42);
v.push_back(16);
v.push_back(29);
sort(v.begin(),v.end());
 for(auto it=v.begin();it !=v.end();it++){
    cout<<*it<<" ";
}
cout<<endl;
//cout<<"size is = "<<v.size()<<", "<<"capacity is ="<<v.capacity()<<endl;
sort(v.begin(),v.end(),greater<int>());
 for(auto it=v.begin();it !=v.end();it++){
    cout<<*it<<" ";
}
}