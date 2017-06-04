//in a string check which character comes how many times
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main()
{   string a;
    cout<<"enter a string"<<endl;
    cin>>a;
    int b[10];
    int c[10];
    int i;
    int j;
    int m;
    int xo =0;

      //converting characters to ascii values
    for(i=0;i<10;i++)
    {
     b[i]=a[i];
    }
   //     output of ascii values
     for(i=0;i<a.length();i++)
     {
         cout<<b[i]<<endl;
     }
     for(i=0;i<a.length();i++)
     {
         int count=0;
         for(j=0;j<10;j++)
         {
          if(b[i]==b[j])
          {
              count++;
          }
         }
         c[i]=count;
     }
   for(i=0;i<a.length();i++)
     {
      cout<<setw(5)<<a[i]<<setw(5)<<c[i]<<endl;
     }

}

