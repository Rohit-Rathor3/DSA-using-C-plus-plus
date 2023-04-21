#include<iostream>
using namespace std;
int main(){
    int n ,i=0 ,big;
    cout<<"Enter size of aaray : ";
    cin>>n;

    double a[n];
    cout<<"\nEnter elements of array : ";
    for(i ; i<n ; ++i){
        cin>>a[i];
    }
    cout<<"\n\t You Entered :- [ ";
    for(int j =0; j<n ; ++j){
        cout<<" "<<a[j];
    }
    
    cout<<" ]";

    // let largest number is a[0];
    double largestNo = a[0];
    for(i=1 ; i<n ; ++i)
    {
       if(largestNo<=a[i])
       largestNo = a[i];
    }
    cout<<"\nLargest Number is :- "<<largestNo;
    return 0;
}