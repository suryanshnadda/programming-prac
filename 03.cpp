
#include<iostream>
using namespace std;
int main()
{


     int a[5];
     int i;
     int j;
     int temp;
     int s=0;
      int con=0;
      cout<<"enter array elements"<<endl;
     for(i=0;i<5;i++)
      {
         cin>>a[i];
      }
     for(i=1;i<5;++i)
      {
        for(j=0;j<(5-i);++j)
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
      }
     for(i=1;i<4;i++)
      {
        s=s+a[i];
        con++;
      }
    s=s/con;
    cout<<"the average is"<<s;
}
