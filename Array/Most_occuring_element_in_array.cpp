/* In this program we find the most occuring element in an array */
#include<iostream>
using namespace std;
int main(){
  int n , max;
  int found =0;
  int count =1 , i=0;
  cout<<"\n Enter size of Array : ";
  cin>>n;
  double array[n];
  cout<<"\nEnter Array Elements :";
  for(int i=0;i<n ; ++i){
      cout<<" ";
    cin>>array[i];
  }
  int count_max = 0;
  cout<<"\nMost occured element : ";
  for(i=0 ; i<n ; i++)
  {   int count =1;
      for(int j=i+1 ; j<n ; j++)
      {
          if(array[i]==array[j])
          {
              count++;

          }
          if(count>count_max)
          {
              count_max=count;
          }
      }
  }
  for(i=0 ; i<n ; i++)
  {   int count =1;
      for(int j=i+1 ; j<n ; j++)
      {
          if(array[i]==array[j])
          {
              count++;

          }
          if(count==count_max)
          {
              found=1;
              max=i;
          }
      }
  }
  if(found==1){
      cout<<array[max]<<endl;
  }
  return 0;
}