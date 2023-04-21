#include<iostream>
using namespace std;
#define max 3
void enqueue(int);
void dequeue();
void traverse();
int queue[max],front=-1,rear=-1;
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
    if(rear==max-1)
    {
        cout<<"\nQueue is Overflow !";
        return;
    }
    else{
        if(front==-1)
        front=0;
        rear++;
        queue[rear]=item;
    }
}
void dequeue()
{  
    int item;
    if(front==-1)
    {
       cout<<"\nQueue is Underflow ! ";
    }
    else
    {
       item=queue[front];
       front++;
       cout<<"\n"<<item<<" has been deleted!\n";
    if(front==rear)
    {
        rear=front=-1;
    }
    }
}
void traverse()
{
    if(rear==-1)
    {
       cout<<"\nQueue is Underflow!";
       return;
    }
    else
    {
        int i;
        for(i=front;i<=rear;i++)
        cout<<"Element "<<i+1<<" "<<queue[i]<<endl;

    }
}