#include<iostream>
using namespace std;
class node{
    public:
    int data;
    class node  *next;
    class node *prev;
}*start=NULL,*last=NULL;
void create(int);
void display();
void count();
void insertFirst(int);;
void insertPos(int,int);
void delPos(int);
void delData(int);
void search(int);
int main(){
    int choice,pos,item,element,searchElement,flag=0;
    while(1)
    {
        cout<<"\n1.To create List :\n2.To display :\n3.To count total nodes :\n4.To insert element at begining :"
            <<"\n5.To insert element at specific position :\n6.To delete element to specific position :\n7"
            <<"To delete elelment by data informtion :\n8.To search an element :\n9.Exit :\n\tEnter your choice : ";
        cin>>choice;
        switch(choice)
        {
            case 1:
            cout<<"\nEnter element to node : ";
            cin>>item;
            create(item);
            break;
            case 2:
            display();
            break;
            case 3:
            count();
            break;
            case 4:
            cout<<"\nEnter element to node : ";
            cin>>item;
            insertFirst(item);;
            break;
            case 5:
            cout<<"\nEnter element to node : ";
            cin>>item;
            cout<<"\nEnter position ,at which you want to insert : ";
            cin>>pos;
            insertPos(item,pos);
            break;
            case 6:
            cout<<"\nEnter position ,at which you want to delete : ";
            cin>>pos;
            delPos(pos);
            break;
            case 7:
            cout<<"\nEnter Data to delete : ";
            cin>>searchElement;
            delData(searchElement);
            break;
            case 8:
            cout<<"\n Enter element to serach : ";
            cin>>element;
            search(element);
            break;
            case 9:
            exit(0);
            break;
            default:
            cout<<"\nEnter valid choice : ";
            break;
        }           
    }
}

// function to create node
void create(int itm)
{
    class node* newNode;
    newNode=(node*) new node();
    if(start==NULL)
    {
        newNode->data=itm;
        start=newNode;
        last=newNode;
        last->next=NULL;
        last->prev =NULL;
        display();
    }
    else
    {
        newNode->data=itm;
        newNode->next=NULL;
        newNode->prev=last;
        last->next=newNode;
        last=newNode;
        display();
    }
}

// function to show all nodes of list
void display()
{   
    int i=1;
    class node* ptr;
    ptr=start;
    if(start==NULL)
    {
        cout<<"\nLinked list underflow!!";
        return;
    }
    else
    {
    cout<<"|Sr.No|     |Address|       |Previous|       |Data|      |Link|";
    while(ptr!=NULL)
    {
        cout<<"\n   "<<i<<"       "<<ptr<<"           "<<ptr->prev<<"              "<<ptr->data<<"            "<<ptr->next<<endl;
        i++;
        ptr=ptr->next;
    } 
    }
}

// function to count total number of node 
void count()
{
    int i=0;
    class node* ptr;
    ptr=start;
    if(start=NULL)
    {
        cout<<"\nLinked list underflow!!";
        return;
    }
    else
    {
    while(ptr!=NULL)
    {
        i++;
        ptr=ptr->next;
    } 
    cout<<"\nThere are total -> "<<i<<"nodes in the list ";
    }
}

//function to insert element at first
void insertFirst(int itm)
{
    class node* newNode;
    newNode=(node*) new node();
    if(start==NULL)
    {
        newNode->data=itm;
        start=newNode;
        last=newNode;
        last->next=NULL;
        last->prev =NULL;
        display();
    }
    else
    {   
        newNode->data=itm; 
        newNode->next=start;
        start->prev=newNode;
        start=newNode;
        newNode->prev=NULL;
        display();
    }
}

//function to insert element at desireable position
void insertPos(int itm,int pos)
{   
    int flag=0;
    class node* newNode;
    class node *ptr;
    int i=1;
    newNode=(node*) new node();
    ptr=start;
    for(i=1;i<pos-1;i++)
    {
        if(ptr==NULL)
        {
            flag=1;
            break;
        }
        else
        {
            ptr=ptr->next;
        }
        if(flag==1)
        {
            cout<<"\nCannot insert node at that location ";
        }
        else
        {
            newNode->data=itm;
            newNode->next=ptr->next;
            ptr->next->prev=newNode;
            newNode->prev=ptr;
            ptr->next=newNode;
            display();
        }
    }
}

// function to delete node by desireable node number
void delPos(int pos)
{
    class node *ptr,*loc;
    int i=1,item;
    ptr=start;
    if(start==NULL)
    {
        cout<<"\nList is UnderFlow!!";
        return;
    }
    for(i=1;i<pos;i++)
        {
            loc=ptr;
            ptr=ptr->next;
            if(ptr==start)
            {
            cout<<"\nThere is no node at location -> "<<pos<<endl;
            return ;
            }
        }
        item=ptr->data;
        loc->next=ptr->next;
        ptr->next->prev=loc;
        free(ptr);
        cout<<"\n\tItem "<<item<<" deleted from postion "<<pos<<endl;
}

//function to delete node by using data information
void delData(int ele)
{
    class node *ptr,*loc; 
    ptr=start;
    if(start==NULL)
    {
        cout<<"\nList is UnderFlow!!";
        return;
    }
    else if(ptr->data==ele)
    {
        start=ptr->next;
        free(ptr);
        cout<<"\n\tItem "<<ele<<" deleted from List ! "<<endl;
    }
    else
    {
        while(ptr!=start)
        {
            if(ptr->data==ele)
            {
                loc->next=ptr->next;
                ptr->next->prev=loc;
                free(ptr);
                cout<<"\n\tItem "<<ele<<" deleted from List ! "<<endl;
                return;
            }
            else
            {   
                loc=ptr;
                ptr=ptr->next;
            }
        }
        cout<<"\nSoory !!! , There is no node with this data!! ";
        return;
    }
}

//function to serach a element int he list 
void search(int ele)
{
    class node *ptr;
    ptr=start;
    int i=0;
    if(start==NULL)
    {
        cout<<"\nLinked List UnderFlow!!";
        return;
    }
    else if(ptr->data==ele)
    {
        cout<<"\n\tItem found at location -> 1"<<endl;
        return;
    }
    while(ptr->next!=start)
        {
            i++;
            if(ptr->data==ele)
            {
                cout<<"\n\t Item found at position -> "<<i<<endl;
                return;
            }
            ptr=ptr->next;
        }
        cout<<"\nSoory !!! , There is no node with this data!! ";
        return;
}