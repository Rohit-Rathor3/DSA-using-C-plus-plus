/* In this program we will pass an array to a function parameter in different methods  */
#include<stdio.h>
#include<conio.h>
int i;
void passByValue(int arr[] ,int n)
{
    for(i=0 ; i<n ;i++)
    {
        printf("%d",arr[i]);
    }
}
void passByRefernce(int *arr,int n)
{
    for(i=0 ; i<n ; i++)
    {
        printf("%d",*arr);
        arr++;

    }
}
int main(){
    int size;
    printf("\n Enter size of array : ");
    scanf("%d",&size);
    int a[size];
    printf("\nEnter array elements : ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nRunning Call By Value : ");
    passByValue(a,size);
    printf("\nRunning Call by Refernce : ");
    passByRefernce(a,size);
    return 0;
}