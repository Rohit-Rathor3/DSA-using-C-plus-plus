/* This is a program to find largest three numbers from an array .  */
#include<iostream>
using namespace std;
int main(){
    int n ,i=0 ;
    cout<<"Enter size of aaray : ";
    cin>>n;
    if(n<=3){
        cout<<"\nEnter array size more than 3 :";
        exit(0);
    }

    double a[n];
    cout<<"\nEnter elements of array : ";
    for(i ; i<n ; ++i){
        cin>>a[i];
    }
    int f ,s,t;
    f=s=t=INT_MIN;
    for(i ; i<n ;++i){
        if(a[i]>f)
        {
            t=s;
            s=f;
            f=a[i];
        }
        else if (a[i]>s)
        {
            t=s;
            s=a[i];
            
        }
        else if (a[i]>t)
        {
            t=a[i];
            
        }
    }
    cout<<"Three largest numbers are :- \n first :- "<<f<<"\n second :- "<<s<<" \n Third :- "<<t;
    

    return 0;
}