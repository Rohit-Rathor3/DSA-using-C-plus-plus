/* in this program we will rotate an array cyclicly
  ex:- arr[1,2,3,4,5]    -----> rotated array  arr[5,1,2,3,4] */
#include<iostream>
#include<conio.h>
using namespace std;
// This a first method to rotaion
void  cyclicRotation(int arr[], int n)
{
int x = arr[n-1], i;
for (i = n-1; i > 0; i--)
	arr[i] = arr[i-1];
arr[0] = x;
}
// This is scond method of rotation using swap
void cyclicRotaionUsingSwap(int arr[],int n){
    int j=n-1,i=0;
    while(i!=j)
    {
        swap(arr[i],arr[j]);
        i++;
    }
}
int main(){
    int size;
    int k=0;
    printf("\nEnter size of array : ");
    scanf("%d",&size);
    int array[size];
    printf("\nEnter elements of array : ");
    for(k ; k<size-1 ; k++)
    {
      scanf("%d ",&array[k]);

    }
    cyclicRotation(array ,size);
    printf("\nRunning First Method : ");
    for(int j=0 ; j<size ;j++)
    {
        printf("%d",array[j]);
    }
    printf("\nRunning Second Method : ");
    cyclicRotaionUsingSwap(array,size);
    for(int k=0;k<size;k++)
    {
       printf("%d",array[k]);

    }
    return 0;
    
}
