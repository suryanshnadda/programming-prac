//if given number number N ,a program to obtain the sum of first and last digit of the numbers.

//to find the length of the number
#include<iostream>
using namespace std;
//global scope

int d;
int count=0;
int x;
//class to get input and length of the number
class il
{
    public:

void input()
{
//getting input from user
cout<<"enter a number";
cin>>x;
}

//now function to get the length of the number
void len()
{
    int y;
    int z;
 //calling input function
    do
    {
     y=x/10;
    count++;
    x=y;
    }
    while(y>=1);
cout<<"length of the number "<<count<<endl;
}
};

//end if class il for input and to get length of the number
// class to calculate the sum of last and first digit  of the number
class sum:public il

{
public:

int a;

    void check()
     {

         int m[3];
         int i=0;
         int y;
         int z;
         int l;

        cout<<"enter the same number with same length"<<endl;
        cin>>l;
         for(i=1;i<count;i++)
         {
            y=l%10;
            z=l/10;
            m[i]=y;
            l=z;
        }
          cout<<"the sum of first and last digit of number is"<<z+m[1];
     }
};
int main()
{
     il obm;
     obm.input();
     obm.len();
  sum obj;
  obj.check();
  return(0);
}
