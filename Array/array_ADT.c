// Here, we will learn Array's ADT(Abstract Data Type)
// Basically, ADT are the ways of classifying data structures by providing minimal 
// expected interface and set of methods.
// An array ADT holds the collection of given elements accessible by an index.

// Here , minumal functionalities -> set(i,num) and get(i)
// operations -> Max() , min() , search(num) , insert(i,num) , append(x).
// Elements in an array are stored in contigous memory locations.
// Elements in an array can be accessed using the base address in constant time -> O(1).
#include<stdio.h>
#include<stdlib.h>
struct myArray
{
    int t_size ;// total size of array
    int u_size; // used size of array
    int *ptr ; // This is a pointer
    
};
        // Now we create our function to create a new array
void createArray(struct myArray *a , int tsize , int  usize){
 a->t_size = tsize;
 a->u_size = usize;
 (*a).ptr = (int *) malloc(tsize*sizeof(int));
}        

      // Now we create a function to set values in array
 void setValue(struct myArray *a){
     int n,i;
     for (i = 0; i < a->u_size; i++)
     {
         printf("\n The value of %d = ",i);
         scanf("%d",&(a->ptr)[i]);
         
     } 
 }     

 // Now we create a function to display the values/ elements of array.
 void showValue(struct myArray *a){
     int i;
 for ( i = 0; i  < a->u_size; i++)
     {
         printf("\n The value of %d is = %d  ",i,a->ptr[i]);  
 }
 }
 /*void searchValue(struct myArray *a){
     int a,i;
     printf(" \n Search a value in array : ");
     scanf("%d",&a);
     for(i=0;i< a->u_size ;i++)
     {
         if((a->ptr[i])==a)
         {
             printf("\n %d Found in Array !!!!!\n ",a);
         }
         else
         {
             printf("\nNot found !!!!!!!\n");
         }
     }
 }
*/
int main()
{   struct myArray a1;
    createArray(&a1 , 10 , 5);
    setValue(&a1);
    showValue(&a1);
    //searchValue(&a1);
    return 0;
} 