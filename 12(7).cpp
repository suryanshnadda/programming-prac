#include<iostream>
using namespace std;
struct node{
int data;
struct node *next;
}NODE;
node *head=NULL;
node *ptr,*tort,*hare,*temp;
void insert(int x)
{
ptr=new node;
ptr->data=x;
ptr->next=NULL;
if(head==NULL)
  {
  head=ptr;
  }
 else
  {
  ptr->next=head;
  head=ptr;
  }
}
void display()
{
temp=head;
while(temp!=NULL){
 cout<<temp->data<<"->";
 temp=temp->next;
 }}
void middle(node *p){
tort=p;
hare=p;
while((tort->next)&&(hare->next->next)){
  tort=tort->next;
  hare=hare->next->next;
  }
cout<<"\nThe middle is="<<tort->data;
}
int main(){

cout<<"SURYANSH SHARMA\n";
char ans;
int num;
do{
cout<<"data for node:";
cin>>num;
insert(num);
cout<<"new nodes:";
cin>>ans;
}
while(ans=='y');
display();
cout<<"\n";
middle(head);
}
