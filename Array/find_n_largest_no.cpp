/* In this program we will find n largest number from an array */
#include <iostream>
using namespace std;
int main() {
  int n;
  cout<<"\n Enter size of Array : ";
  cin>>n;
  double array[n];
  cout<<"\nEnter Array Elements :\n";
  for(int i=0;i<n ; ++i){
    cin>>array[i];
  }
  for (int step = 0; step < n; ++step) {
      
    // loop to compare array elements
    for (int i = 0; i < (n - step-1); ++i) {

      // compare two adjacent elements
      // change > to < to sort in descending order
      if (array[i] >= array[i + 1]) {

        // swapping elements if elements
        // are not in the intended order
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
      }
    }
  }
  int choice;
 
  cout<<"\nEnter number you want to pick largest from an array \n";
  cin>>choice;
  if(choice>n){
      cout<<"Number must be lesser than size of array !!";
      
  }
  else{
        cout<<"\nLargest "<<choice<<" Numbers :- ";
        for(int x=(n-choice) ; x<n;x++){
        cout<<" " <<array[x];
  }
  }
  
  return 0;
}