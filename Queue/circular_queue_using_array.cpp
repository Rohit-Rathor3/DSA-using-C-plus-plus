#include<iostream>
using namespace std;
#define size 3
void enqueue(int);
void dequeue();
void traverse();
int cqueue[size],front=-1,rear=-1;
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
}
void enqueue(int item)
{
    if((front==0&&rear==size-1)||(front==rear+1))
    cout<<"\nCircular queue is Overflow !";
    else
    {
        if(rear==size-1&&front!=0)
        rear=-1;
        cqueue[++rear]=item;
        cout<<"\nInsertion successful!\n";
        if(front==-1)
        front=0;
    }
}
void dequeue()
{
    if(front==-1&&rear==-1)
    cout<<"\nCircular Queue is Underflow!!";
    else
    {
        cout<<cqueue[front++]<<" deleted successfullly! ";
        if(front-1==rear)
        front=rear=-1;
        if(front==size)
        front=0;
    }
}
void traverse()
{
    if(front==-1)
    cout<<"\nCircular queue is Underflow!!";
    else
    {
        int i=front;
        cout<<"Elements : ";
        if(front<=rear)
        {
            while(i<=rear)
            cout<<" "<<cqueue[i++];
        }
        else
        {
            while(i<size-1)
            cout<<" "<<cqueue[i++];
            i=0;
            while(i<=rear)
            cout<<" "<<cqueue[i];
        }

    }
}