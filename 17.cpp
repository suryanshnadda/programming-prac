#include<iostream>
using namespace std;
int main(){
int s;
long int n,r,m;
cout<<" SURYANSH"<<"\nEnter number:";
cin>>n;
m=n;
while(n>0){
r=n%10;
s=s*10+r;
n=n/10; }
if(s==m){
cout<<"Number  is Palindrome:"<<"\nThey are Win…!!!";
}
else{
cout<<"Not  Palindrome:";
}
}
