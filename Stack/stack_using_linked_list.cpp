#include<iostream>
using namespace std;
class node{
    public:
    int data;
    class node *next;
}*top;
static int i=1;
void push(int);
void pop();
void traverse();
int main(){
    int choice,ele;
    top==NULL;
    do{
    cout<<"\n 1. Push \n 2. Pop \n 3. Traverse \n 4. Exit \n Enter Choice : ";
    cin>>choice;
    switch(choice)
    {
        case 1:
        cout<<"\nEnter element you want to push in stack : "<<endl;
        cin>>ele;
        push(ele);
        break;
        case 2:
        pop();
        break;
        case 3:
        traverse();
        break;
        case 4:
        exit(0);
        break;
        default:
        cout<<"\n plz enter correct choice !!";
        break;
    }
}while(1);
}
void push(int item)
{   
    node *newNode;
    if(top==NULL)
    {
      newNode=(node *)new node();
      newNode->data=item;
      newNode->next=NULL;
      top=newNode;  
    }
    else
    {
      newNode=(node*)new node();
      newNode->data=item;
      newNode->next=top;
      top=newNode;  
    }
}
void traverse()
{   
    node *ptr;
    ptr=top;
    if(ptr==NULL)
    {
        cout<<"Stack Underflow : ";
        return;
    }
    else
    {  
        
        cout<<"Element |   Data |  Address |"<<endl;
        while(ptr!=NULL)
        {  
            cout<<"   "<<i<<"          " <<ptr->data<<"     " <<ptr->next<<endl;
            i++;
            ptr=ptr->next;
        }
    }
}
void pop()
{
    if(top==NULL)
    {
        cout<<"Stack Underflow !!";
        return;
    }
    else
    {
        int item;
        item=top->data;
        free(top);
        top=top->next;
        cout<<"\nYou have popped "<<item;
    }
}
    