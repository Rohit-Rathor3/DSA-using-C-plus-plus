#include<iostream>
using namespace std;
//#define maxSize 5;
int Stack[5];
void push(int);
void pop();
void traverse();
int top=-1;
static int j=1;
int main(){
    int Stack[5];
    int choice,ele;
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
        case 4:
        exit(0);
        break;
        default:
        cout<<"\n plz enter correct choice !!";
    }
}while(3);
return 0;
}
void push(int ele)
{
    if(top==4)
    {
        cout<<"Stack Overflow !";
        return;
    }
    else
    {
        top=top+1;
        Stack[top]=ele;
        cout<<"You have pushed "<<ele<<endl;
    }

}
void pop()
{   int delItem;
    if(top==-1)
    {
        cout<<"stack underflow ";
        return;
    }
    else
    {
        delItem=Stack[top];
        top=top-1;
        cout<<" You have poped "<<delItem<<endl;

    }
}
void traverse()
{
    if(top==-1)
    {
        cout<<"There is no element -> Stack underflow !" ;
        return;
    }
    else
    {
        for(int i=top;i>=0;i--)
        {  
            cout<<"\nElement "<<j <<"= "<<Stack[i]<<endl;
            j++;
        }
    }
}