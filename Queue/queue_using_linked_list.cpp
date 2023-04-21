#include<iostream>
using namespace std;
class node{
    public:
    int data;
    class node *next;
}*front,*rear;
void enqueue(int val);
void dequeue();
void traverse();
int  i=1;
int main()
{   
    int choice,val;
    while(1)
    {
        cout<<"\n1. Enqueue \n2. Deueue \n3.Traverse \n4.Exit \n Enter your choice : ";
        cin>>choice;
        switch(choice)
        {
            case 1:
            cout<<"\nEnter element to enqueue : ";
            cin>>val;
            enqueue(val);
            break;
            case 2:
            dequeue();
            break;
            case 3:
            traverse();
            break;
            case 4:
            exit(0);
            default :
            cout<<"\nPlz enter valid choice : ";
            break;
        }
    }
    return 0;
} 
void enqueue(int item)
{   
    node *newNode=new node();
    newNode->data=item;
    newNode->next=NULL;
    if(rear==NULL && front==NULL)
    {
        rear=front=newNode;
    }
    else
    {
        rear->next=newNode;
        rear=newNode;

    }
}
void dequeue()
{
    node *del;
    int item;
    if(front==NULL)
    cout<<"\nQueue is Underflow !!";
    else
    {
        del=front;
        item=front->data;
        if(front==rear)
        {
            front=rear=NULL;
        }
        else
        {
            front=front->next;
            free(del);
            cout<<"\n "<<item<<" deleted successfully !\n";
            cout<<"|Front|    |Rear| \n"<<front<<"     "<<rear<<endl;
        }
    }
}
void traverse()
{
    node *ptr;
    ptr=front;
    if(front==NULL)
    cout<<"\n\t\tNo element in queue !\n";
    else
    {   i=1 ;
        while(ptr!=NULL)
        {
            cout<<"Element "<<i<<" "<<ptr->data<<endl;
            ptr=ptr->next;
            i++;
        }
    }
}