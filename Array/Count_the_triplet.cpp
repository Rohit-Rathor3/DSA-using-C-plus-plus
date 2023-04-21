/* Given an array of distincts integers. The task is to count all the triplets such that
   sum of two elements equals the third element.
   example :- arr[]= {1,5,3,2}
   output = 2.
   explaination -> There are 2 triplets: 1+2 =3 , 3+2 =5 */
#include<iostream>
using namespace std;
int main()
{
        int arraySize;
        int indexArray[100000],count=0;
        cout<<"\nEnter size of array : ";
        cin>>arraySize;
        int arr[arraySize];
        cout<<"\nEnter array elements : ";
        for(int i=0 ;i<arraySize;i++)
        {
            cin>>arr[i];
        }
        for(int i=0 ; i<arraySize;i++)
        {
            indexArray[arr[i]]=1;
        }
        for(int i=0; i<arraySize;i++)
        {
          for(int j=i+1; j<arraySize ;j++)
          {
              if(indexArray[arr[i]+arr[j]]==1)
              {
                  count++;
              }
          }  
        }
        cout<<"Total Triplets :- "<<count<<endl;
        return 0;
    }