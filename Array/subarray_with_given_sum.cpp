#include<iostream>
using namespace std;
int main()
{
    int T;
    cout<<"Enter test case : ";
    cin>>T;
     while(T--)
     {
        long int arraySize ,s ;
        long int flag =0 ,start =0 , sum=0;
        cout<<"\nEnter size of array : ";
        cin>>arraySize;
        long int a[arraySize];
        cout<<"\nENter Sum : ";
        cin>>s;
        cout<<"\nEnter array elements : ";
        for(int i=0 ; i<arraySize ; i++)
            cin>>a[i];
        for(int i=0 ; i<arraySize ; i++)
        {
            sum += a[i];
            while(sum>s)
            {
                sum-=a[start];
                start++;
            }
            if(sum==s)
            {
                cout<<"start position "<<start+1<<" end postion "<<i+1;
                flag=1;
                break;
            }
        }
        if(flag=0)
        {
            cout<<"\nsum not exist : ";
        }
     }
   
    return 0;
}