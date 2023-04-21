#include<iostream>
using namespace std;
class array{
    int size,pos;
    int arr[50];
    public:
    array(int n)
    {
        size=n;
        arr[size];
    }
    void del()
    {   
        
        cout<<"\nInsert Array Element : ";
        for(int a=0;a<size;a++)
        cin>>arr[a];
        cout<<"\nBefore Deletion : ";
        for(int i=0;i<size;i++)
        cout<<" "<<arr[i];
        cout<<"\nEnter position you, want to delete : ";
        cin>>pos;
        for(int j=pos;j<=size;j++)
        {
            arr[j-1]=arr[j];
        }
        size-=1;
        cout<<"\nAfter Deletion : ";
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
    a1.del();
    return 0;

}