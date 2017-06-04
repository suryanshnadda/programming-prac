/*
Every day, Mike goes to his job by a bus, where he buys a ticket. On the ticket, there is a letter-code that can be represented as a string of
upper-case Latin letters. Mike believes that the day will be
 successful in case exactly two consecutive different letters in the code are in alphabetic order.
Otherwise, he believes that the day will be unlucky.
You are given a ticket code. Write a program to determine,
whether the day will be successful for Mike or not. Print "YES" or "NO".
*/

#include<iostream>
using namespace std;
int main()
{
    char a;
    char b;

    cout<<"enter two charters";
    cin>>a>>b;

    cout<<int(a)<<endl;
    cout<<int(b);


   if(int(a)-int(b)==1)
   {
       cout<<"\nLUCKY";

   }

   else if(int(b)-int(a)<=1)
   {
       cout<<"\nLUCKY";
   }

   else
     cout<<"\nunlucky";
}

