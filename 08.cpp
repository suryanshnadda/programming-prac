/*
pooja would like to withdraw x us dollar from an atm.
the cash machine will only accept the transaction if x is multiple of 5,
and pooja's account balance has enough cSH TO perform the withdraw
transaction(including bank charges)0.50us dollar for every successful withdraw
calculate pooja account balance after an attempted transaction
*/
#include<iostream>
using namespace std;
int main()
{
  //let us suppose pooja is having 200us dollar in her account
  const float a=200;
  float b;//amount to withdraw
  float y=0.50; //bank service charges
  int c;

  cout<<"enter the amount you want to withdraw";
  cin>>b;
  c=b+0.50;
  float s=b;


  if(c%5==0)
  {
      s=a-s-0.50;
      cout<<"your transaction successful"<<endl;
      cout<<"now you left with"<<s<<"dollars"<<endl;
  }

  else
  {
      cout<<"transaction unsuccessful"<<endl;
      cout<<"please enter amount in multiples of 5"<<endl;\
      cout<<"your account has"<<a<<"dollars"<<endl;
  }
}
