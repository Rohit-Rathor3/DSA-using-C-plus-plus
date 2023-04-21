/* In this program we will print the next great elemnent of an array if exits */
#include <iostream>
using namespace std;
int main() {
  int n ,j=0 ,i=0;
  int found=0;
  cout<<"\n Enter size of Array : ";
  cin>>n;
  double array[n];
  cout<<"\nEnter Array Elements :\n";
  for(int i=0;i<n ; ++i){
    cin>>array[i];
  }
  for(i ; i<(n-1) ;i++){
      for(j=1 ; j<i+2 ; j++)
      {
          if(array[i]<array[j])
          {
              found =1;
              if(found==1){
              cout<<array[i]<<":"<<array[j]<<endl;
          }  
           
          }
           
          
      }
          
      
      
  }
  return 0;
}