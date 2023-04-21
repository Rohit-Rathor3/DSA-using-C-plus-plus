/* Kaden's algorithm is used to find a subarray with maximum sum in an array in O(n) time complexity */
#include<stdio.h>
int main()
{
    int size ,currentMax,globalMax;
    printf("\nEnter size of Array : ");
    scanf("%d",&size);
    int arr[size];
    printf("\nEnter array of Element : ");
    for(int i=0;i<size;i++)
    scanf("%d",&arr[i]);
    // Using kaden's algo
    currentMax=arr[0];
    globalMax=arr[0];
    for(int j=1;j<size;j++)
    {
        currentMax+=arr[j];
        if(currentMax>globalMax)
        {
            globalMax=currentMax;
        }
        if(currentMax<0)
        {
            currentMax=0;
        }
    }
    printf("\n Maximum Sum = %d ",globalMax);
    return 0;
}