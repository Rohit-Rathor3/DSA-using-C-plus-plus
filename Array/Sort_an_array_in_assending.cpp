// Bubble sort in C++

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
  
  cout << "Sorted Array in Ascending Order:\n";  
  for (int k = 0; k < n; ++k) {
    cout << "  " << array[k];
  }
  cout << "\n";
 
  return 0;
}