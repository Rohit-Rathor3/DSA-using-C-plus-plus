#include<iostream>
using namespace std;
int main(){
    cout<<" Array :- An array is a collection of homogeneous data items stored at contiguous memory location."
        <<" \n The memory location of the first element of the array denoted by the name of the array."
        <<"\nAdvantage of Array :- \n 1. Array allow random access to elements. This makes accessing elements by positon faster."
        <<"\n 2.Arrays represent multiple data items of the same name type using a single name."
        <<"\n It is used to implement other data structures like queue , Stacks , heaps , hash , tables etc."
        <<"\n\nDisadvantage of Array :- \n1. You cannot change the size , because of static memory allocation."
        <<"\n2. Insertion and Deletion is difficult as the elements are stored in consecutive memory location\n"
        <<"   and the shifting is costly too.";
        cout<<"\nLet declares an array :";
        cout<<"\n1. Method";
        cout<<"\nint arr[]= {1,2,3,4,5}";
        cout<<"\nIn this method we don't require to define size.";
        cout<<"\n2. Method";
        cout<<"\nint arr[5]; or int arr[5] = {1,2,3,4,5}";
        cout<<"\nIn this method we have declared the size of the array.\n"
            <<"if we use int arr[5] then all elements will assign with garbage value."
            <<"\nif we use int arr[5] = {0}; all elements will be assign with 0.";

        
        return 0;
}