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
    int f ,s,t,j=0;
    f=s=t=-997979;
    for(j ; j<n ;++j){
        if(a[j]>f)
        {
            t=s;
            s=f;
            f=a[j];
        }
        else if (a[j]>s)
        {
            t=s;
            s=a[j];
            
        }
        else if (a[j]>t)
        {
            t=a[j];
            
        }
    }
    cout<<"Three largest numbers are :- \n first :- "<<f<<"\n second :- "<<s<<" \n Third :- "<<t;
    

    return 0;
}