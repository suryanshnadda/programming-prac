//if given number number N ,a program to obtain the sum of first and last digit of the numbers.
#include<iostream>
using namespace std;
//global scope
int d;
class sum
{
public:
    int a;
    void input()
    {
        cout<<"enter a number";
        cin>>d;
    }
    void check()
     {
         int m[3];
         int i=0;
         int y;
         int z;
         for(i=1;i<3;i++)
         {
            y=d%10;
            z=d/10;
            m[i]=y;
            d=z;
        }
          cout<<"the sum of first and last digit of number is"<<z+m[1];
     }
};
int main()
{
sum obj;
obj.input();
obj.check();
}
