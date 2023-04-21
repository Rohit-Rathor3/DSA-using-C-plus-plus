/* This is a program to find second largest number from an array .  */
#include<iostream>

using namespace std;
int main(){
    int n ,i=0 ;
    cout<<"Enter size of aaray : ";
    cin>>n;
    if(n<2){
        cout<<"\nEnter array size more than 2 :";
        exit(0);
    }
    double a[n];
    cout<<"\nEnter elements of array : ";
    for(i ; i<n ; ++i){
        cin>>a[i];
    }
    double f,s;
    f=s=-166612384;
    for(int j ; j<n ;++j){
        if(a[j]>f){
            s=f;
            f=a[j];
        }
        else if (a[j]>s)
        {
            s=a[j];
            
        }
    }
    cout<<"Second Largest No :- "<<s;
    return 0;
}