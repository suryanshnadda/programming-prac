/*

Aim: The Owner of a block visited the Layout and found that he has some plot numbers of his own and some are odd numbers and some are even numbers.
 He is maintaining the details in a file in the system.
For the password protection our owner has followed one formula.
 He calculated the sum of his even numbers plot
and sum of odd numbers plot and found the average
of those two and he used that average as his password for the details file.
 Find the password that our owner has arrived.
*/

#include<iostream>
using namespace std;
int main()
{
    int i;
    int a[5];
    int s=0;
    int p=0;
    int son=0;
    int pon=0;
    cout<<"enter the elements in the array";

     for(i=0;i<5;i++)
      {
        cin>>a[i];
      }
     for(i=0;i<5;i++)
      {


        if(a[i]%2==0)
        {
         s=s+a[i];
        }

        else
        {
         p=a[i]+p;

        }
      }

    s=s+p;
    s=s/2;

    cout<<"\n"<<s;
return(0);
}
