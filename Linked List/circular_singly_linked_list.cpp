/* Here, we will do some basic operations on circular singly linked list */
#include<iostream>
using namespace std;
class node{
    public:
    int data;
    class node *next;
}*head;
void insertBeg();
void insertLast();
void deleteBeg();
void deleteLast();
void Search();
void display();
int main()
{   
    int choice;
    while(1)
    {
        cout<<"\n1.Insert at begining :\n2.Delete From begining :\n3.Delete From last :\n4.Search a node :"
            <<"\n5.Insert at last :\n6.Display List :\n7.Exit :\n\tEnter Your choice : ";
            cin>>choice;
        switch(choice)
        {
            case 1:
            insertBeg();
            break;
            case 2:
            deleteBeg();
            break;
            case 3:
            deleteLast();
            break;
            case 4:
            Search();
            break;
            case 5:
            insertLast();
            break;
            case 6:
            display();
            break;
            case 7:
            exit(0);
            break;
            default:
            cout<<"\nPlz make correct choice !!";
            break;
        }     
    }
    return 0;
}
// Function to insert node at begining
void insertBeg()
{
    class node* newNode,*temp;
    newNode =(node*) new node();
    int item;
    cout<<"\nEnter element to node : ";
    cin>>item;
    if(head==NULL)
    {   
        newNode->data=item;
        newNode->next=head;
        head=newNode;
        head->next=head;
        
        cout<<item<<" has been inserted successull!!";
    }
    else
    {
        temp=head;
        while(temp->next!=head)
        {
           temp=temp->next;
        }
        newNode->next=head;
        temp->next=newNode;
        head=newNode;
        cout<<item<<" has been inserted successull!!";
    }
}
void insertLast()
{
    class node* newNode,*temp;
    newNode =(node*) new node();
    int item;
    cout<<"\nEnter element to node : ";
    cin>>item;
    newNode->data=item; 
    if(head==NULL)
    {   
        newNode->next=head;
        head->next=newNode;
        head=newNode;
        cout<<endl<<item<<" has been inserted successull!!";
    }
    else
    {
        temp=head;
        while(temp->next!=head)
           temp=temp->next;
           temp->next=newNode;
           newNode->next=head;
        cout<<item<<" has been inserted successull!!";
    }
}

// function for delete a node from begining
void deleteBeg()
{
    class node* ptr;
    if(head==NULL)
    cout<<"\nThere is no node in the list , UnderFlow!!";
    else if(head->next==head)
    {
        head=NULL;
        free(head);
        cout<<"\nNode deleted !!";
    }
    else
    {
        ptr=head;
        while(ptr->next!=head)
        {
            ptr=ptr->next;
            ptr->next=head->next;
            free(head);
            head=ptr->next;
            cout<<"\nNode is deleted !";
        }
    }
}
// function to delete last node
void  deleteLast()
{
    class node* ptr,*prev;
    if(head==NULL)
    {
        cout<<"\nThere is no node in the list, UnderFlow!";
        return;
    }
    else if(head->next==head)
    {
        head=NULL;
        free(head);
        cout<<"\nNode id deleted!";
    }
    else
    {
        ptr=head;
        while(ptr->next!=head)
        {
            prev=ptr;
            ptr=ptr->next;
        }
        prev->next=ptr->next;
        free(ptr);
        printf("\nNode Deleted !!");
    }
}
// function to serach a node 
void Search()
{
    class node *ptr;
    int item,i=0,flag;
    ptr=head;
    if(ptr==NULL)
    cout<<"\nThere is no node in the list, UnderFlow!";
    else
    {
        cout<<"\n Enter element to serach in list : ";
        cin>>item;
        if(head->data==item)
        {
        cout<<item<<" is located at "<<i+1;
        flag=1;
        }
        else
        {
            while(ptr->next!=head)
            {
                if(ptr->data==item)
                {
                    cout<<item<<" is located at "<<i+1;
                    flag=1;
                    break;
                }
                else
                flag=0;
                i++;
                ptr=ptr->next;
            }
        } 
        if(flag==0)
        cout<<"\nNode not found!!";
    }

}

//function for display all nodes of list
void display()
{
    class node *ptr;
    int i=1;
    ptr=head;
    if(head==NULL)
    cout<<"\nThere is no node in the list, UnderFlow!";
    else
    {   
        cout<<"\n|Sr.NO|         |Ptr|      |Data|        |Link|";
        ptr=head;
        while(ptr->next!=head)
        {
            cout<<"\n   "<<i<<"        "<<ptr<<"       "<<ptr->data<<"          "<<ptr->next;
            ptr=ptr->next;
            i++;
        }
    }
} 