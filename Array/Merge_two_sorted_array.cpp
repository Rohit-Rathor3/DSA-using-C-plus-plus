/* Merge two sorted array in non- decreasing order , without using extra space */
#include<iostream>
using namespace std;
void sort(int a[],int size)
{  int k,temp;
    for(k=0;k<size-1;k++)
    {  
        for(int n=0;n<size-k-1;n++)
        {
           if(a[n]>a[n+1])
        {
            temp=a[n];
            a[n]=a[n+1];
            a[n+1]=temp;
        }
        }
        
        
    }
    for(k=0;k<size;k++)
    cout<<a[k];

}
int main()
{   
    int size1,size2,i,j,k;
    cout<<"\nEnter size of array1 and array2 : ";
    cin>>size1>>size2;
    int arr1[size1],arr2[size2];
    // taking element of array1
    cout<<"Enter element of array1 : ";
    for(i=0;i<size1;i++)
    cin>>arr1[i];
    cout<<"\nEnter size of array2 : ";
    for(i=0;i<size2;i++)
    cin>>arr2[i];
    // swapping array elements if element of arr1 is bigger than of arr2;
    j=size1-1;
    k=0;
    
    while(j>=0 && k<size2)
    {
        if(arr1[j]>arr2[k])
        {
            int temp;
            temp=arr1[j];
            arr1[j]=arr2[k];
            arr2[k]=temp;
        }
        j--;
        k++;
    }
    //sorting and merging array elements;
    sort(arr1,size1);
    sort(arr2,size2);
    return 0;
    

}