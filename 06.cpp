/*
Aim: Little Egor is a huge movie fan. He likes watching
different kinds of movies: from drama movies to comedy movies,
from teen movies to horror movies. He is planning to visit cinema this weekend,
 but he's not sure which movie he should watch.
There are n movies to watch during this weekend. Each movie can be characterized by two integers Li and Ri, denoting
the length and the rating of the corresponding movie. Egor wants to watch exactly one movie with the maximal value of Li × Ri.
If there are several such movies, he would pick a one with the maximal Ri among them.
If there is still a tie, he would pick the one with the minimal index among them.
Write a program to help Egor to pick a movie to watch during this weekend.
*/

#include<iostream>
using namespace std;
int main()
 {

    int a[5];
    int i;
    int temp;
    int j;
    int b[5];
    int c[5];
        cout<<"enter li";
        for(i=0;i<=4;i++)
    {
     cin>>a[i];
    }

    cout<<"now enter ri";
    for(i=0;i<=4;i++)
    {
     cin>>b[i];
    }

   cout<<"product";
  for(i=0;i<=4;i++)
     {
      c[i]=a[i]*b[i];
     }
  for(i=0;i<=4;i++)
     {
     cout<<c[i]<<endl;
     }

  for(i=0;i<4;++i)
    {
          for(j=0;j<(4-i);++j)
            if(a[j]>a[j+1])
            {
                temp=c[j];
                c[j]=c[j+1];
                c[j+1]=temp;
            }
    }

    cout<<"sorted array";
      for(i=0;i<=4;++i)
       {
        cout<<c[i]<<endl;
        }


return(0);

 }
