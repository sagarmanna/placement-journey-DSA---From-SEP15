#include<iostream>
using namespace std;
int main(){
    
int s =21;
int e = 25;
int rev_sum=0;
for(int i =s;i<=e;i++){
    int num=i;
    int rev=0;
while(num>0){
    int rem=num%10;
    rev=rev*10+rem;
    num=num/10;
}
rev_sum+=rev;

}
cout<<rev_sum;




}