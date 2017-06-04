/*
input like-4566
output like-
6
6
5
4
*/

#include<iostream>
using namespace std;
int main()
{

  int a;
  cout<<"enter a number";
  cin>>a;

    int b;
    int c;

   do
    {
     b=a%10;
     c=a/10;

    cout<<b<<endl;
    a=c;
    }

    while(c>9);
    cout<<c;
}
