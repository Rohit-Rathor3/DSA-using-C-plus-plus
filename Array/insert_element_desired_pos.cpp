#include<iostream>
using namespace std;
class array{
    int size,num,pos;
    int arr[50];
    public:
    array(int n)
    {
        size=n;
        arr[size];
    }
    void insert()
    {   
        
        cout<<"\nInsert Array Element : ";
        for(int a=0;a<size;a++)
        cin>>arr[a];
        cout<<"\nBefore Insertion : ";
        for(int i=0;i<size;i++)
        cout<<" "<<arr[i];
        cout<<"\nEnter Element You want to insert : ";
        cin>>num;
        cout<<"\nEnter position : ";
        cin>>pos;
        for(int j=size;j>=pos;j--)
        {
            arr[j]=arr[j-1];
        }
        arr[pos-1]=num;
        size+=1;
        cout<<"\nAfter Insertion : ";
        for(int k=0;k<size;k++)
        cout<<arr[k];

    }
};
int main()
{
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    array a1(n);
    a1.insert();
    return 0;

}