/* In this program we will do simple operations on a singly linked list*/
#include<iostream>
using namespace std;
class node{
    public:
    int data;
    class node *next;
}*start=NULL,*last=NULL;
int item;
void create(int);
void display();
void countNode();
void insertBeg(int);
void insertPos(int,int);
void deletePos(int);
void deleteItem(int);
void search(int);
int main()
{
    int choice,pos,element;
        while(1)
        {
            cout<<"\n1.Create a List :\n2.Display List :\n3.Count total Nodes :\n4.Insert Node at Begining"
                <<"\n5.Insert at Desired Position :\n6.Delete node by position :\n7.Delete node by data :"
                <<"\n8.Search a node :\n9.Exit :\n\t\t\tEnter Your choice : ";
        cin>>choice;
            switch (choice)
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
                countNode();
                break;
                case 4:
                cout<<"\nEnter element to node : ";
                cin>>item;
                insertBeg(item);
                break;
                case 5:
                cout<<"\nEnter element to node : ";
                cin>>item;
                cout<<"Enter position : ";
                cin>>pos;
                insertPos(item,pos);
                break;
                case 6:
                cout<<"\nEnter postion : ";
                cin>>pos;
                deletePos(pos);
                break;
                case 7:
                cout<<"\nEnter element you, want to delete from the list : ";
                cin>>element;
                deleteItem(element);
                break;
                case 8:
                cout<<"\nEnter element , you want to search : ";
                cin>>item;
                search(item);
                break;
                case 9:
                exit(0);
                break;
                default:
                cout<<"\n\t\tPlease make correct choice !!!!! ";
                break;
            }
        }
}
// function for create a node in the list
void create(int item)
{
    class node *newNode;
    newNode = (node*) new node();
    if(start==NULL)
    {
        newNode->data=item;
        newNode->next=NULL;
        start=last=newNode;
    }
    else
    {
        newNode->data=item;
        newNode->next=NULL;
        last->next=newNode;
        last=newNode;
    }
    
}
// Function to show the all nodes of the list
void display()
{
    class node *ptr;
    ptr=start;
    if(ptr==NULL)
    {
        cout<<"\nThere is no element in the node.";
        return;
    }
    else
    {   
        int i=1;
        cout<<"\n|Sr.no|   |Address|   |Data|   |Link| \n";
        while(ptr!=NULL)
        {   
            cout<<"  "<<i<<" \t"<<ptr<<"        "<<ptr->data<<"          "<<ptr->next<<endl;
            ptr=ptr->next;
            i++;
        }
    }
}

// funtion to count total nodes in the list
void countNode()
{
    class node *ptr;
    ptr=start;
    if(ptr==NULL)
    {
        cout<<"\nThere is no element in the node.";
        return;
    }
    else
    {   
        int i=1;
        while(ptr->next!=NULL)
        {  
            ptr=ptr->next;
            i++;
        }
        cout<<"\nTotal Nodes are :- "<<i<<endl;
    }
}
// Function to insert element at begining
void insertBeg(int item)
{
    class node *newNode;
    newNode = (node*) new node();
    if(start==NULL)
    {
        newNode->data=item;
        newNode->next=NULL;
        start=last=newNode;
        display();
    }
    else
    {
        newNode->data=item;
        newNode->next=start;
        start=newNode;
        display();
    }
}

// function for insert at desired position
void insertPos(int item,int pos)
{  
    int i,flag=0;
    class node *newNode,*ptr;
    ptr=start;
    for(i=1;i<pos-1;i++)
    {
        if(ptr==NULL)
        {
            flag=1;
            return;
        }
        else
        {
            ptr=ptr->next;
        }
    }
    if(flag==1)
    {
        cout<<"\n We cannot insert node at "<<pos<<" postion"<<endl;
    }
    else
    {
        newNode=(node*) new node();
        newNode->data=item;
        newNode->next=ptr->next;
        ptr->next=newNode;
        display();
    }
}
// function to delete a node by desired postion
void deletePos(int pos)
{
    class node *ptr,*prev;
    int delItem;
    ptr=start;
    if(start==NULL)
    {
        cout<<"\nThere is no node , in the list !!";
        return;
    }
    else
    {
        int i=1;
        for(i;i<pos;i++)
        {
            prev= ptr;
            ptr=ptr->next;
            if(ptr==NULL)
            {
                cout<<"\nThere is no Node at "<<pos<<" position !";
                return; 
            }
            else
            {
                delItem=ptr->data;
                prev->next=ptr->next;
                free(ptr);
                cout<<deleteItem<<" has been deleted sucessfully ! ";
                display();
            }
        }
    }

}
// Function to delete a node by its data
void deleteItem(int data)
{
    class node *ptr,*prev;
    ptr=start;
    if(start==NULL)
    {
        cout<<"\nThere is no node , in the list !!";
        return;
    }
    else if(ptr->data==data)
    {
        start=ptr->next;
        free(ptr);
        cout<<data<<" has been deleted succssfully !";
        return;
    }
    else
    {
        prev=ptr;
        while(ptr!=NULL)
        {
            if(ptr->data==data)
            {
               prev->next=ptr->next;
               free(ptr);
               cout<<data<<" has been deleted successfully!!";
               return;
            }
            else
            {
                prev=ptr;
                ptr=ptr->next;
            }
        }
        cout<<"\nData is not present in the list !";
    }
}
// function to serach a node in the list
void search(int data)
{   
    class node* ptr;
    ptr=start;
    if(start==NULL)
    {
        cout<<"\nThere is no node , in the list !!";
        return;
    }
    else
    {   
        int i=0;
        while(ptr!=NULL)
        {  
            i++;
            if(ptr->data==data)
            {
                cout<<data<<" is located at "<<i<<" position."<<endl;
                return;
            }
            else
            {
                ptr=ptr->next;
            }
        }
        cout<<"There is no node with data "<<data<<endl;
    }
}