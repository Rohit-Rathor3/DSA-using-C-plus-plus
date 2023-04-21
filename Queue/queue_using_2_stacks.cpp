/* We can implement queue using stacks , we need minimum to stacks for implementation of queue.*/
#include<iostream>
using namespace std;
#define max 5
int s1[max],s2[max],top=-1,i,j;
void enqueue(int val);
void dequeue();
void traverse();
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
    if(top==max-1)
    {
        cout<<"\nQueue is Underflow !";
    }
    else
    {
        top++;
        s1[top]=item;
    }
    j=0;
    for(i=top;i>=0;i--)
    {
        s2[j]=s1[i];
        j++;
    }
}
void dequeue()
{
    int item;
    if(top==-1)
    {
        cout<<"\nQueue is Underflow !";
    }
    else
    {    item=s1[0];
        for(i=0;i<=top;i++)
        {   
            
            s1[i]=s1[i+1];
            top--;
        }
        cout<<item<<" deleted !\n";
        j=0;
        for(i=top;i>=0;i--)
    {
        s2[j]==s1[i];
        j++;
    }
    }
}
void traverse()
{
    cout<<"\n Elements of | stack1 |   | stack2 | \n";
    for(i=0;i<=top;i++)
    cout<<"      \t\t "<<s1[i]<<"           "<<s2[i]<<endl;
}