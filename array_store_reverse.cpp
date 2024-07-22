#include <iostream>
#include <string>
using namespace std;

// input 1 2 3 4
// output 4 3 2 1

int main() {
    
    int size;
  
  cout << "enter  the size of array = ";
  cin >> size;
  
  int arr[size];
  
  for(int i = 0; i < size;i++)
  {
      cin >> arr[i];
  }
  
  
   for(int j = size-1; j >= 0 ;j--)
  {
      cout<<arr[j]<<"\n";
  }
  
    return 0;
}