/*
Given an array consisting of N integers, you have to do the following operation K times.
Find out the sum of all the elements in the array. Denote it by S.
 Insert an integer in the array strictly greater than S. Hence,
size of the array will increase by one.
Thus, at the end of the K operations, the array will have N + K elements.
Since this number can be very large, write a program to tell whether it will be odd or even.

*/

#include<iostream>
using namespace std;
int main()
 {

   int a[5];
   int i;
   int s=0;
   int c=0;
   cout<<"enter elements of array";
     for(i=0;i<=4;i++)
      {
       cin>>a[i];
      }
       cout<<"sum of array elements";
    for(i=0;i<=4;i++)
       {
       s=s+a[i];
       }
     cout<<s<<endl;

     cout<<"now enter a number greater the sum of array";

     cin>>a[5];

      s=s+a[i];

     cout<<s;


    if(s%2==0)
     {
      cout<<s<<"sum is even in nature";
     }
    else if(s%3==0)
     {
      cout<<"sum is odd in nature";
     }
    else
    cout<<"sum is prime in nature";

return(0);
}
