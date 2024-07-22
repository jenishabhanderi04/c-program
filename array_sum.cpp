#include <iostream>
#include <string>
using namespace std;

int main() {
    
    int size,sum;
  
  cout << "enter  the size of array = ";
  cin >> size;
  
  int arr[size];
  
  for(int i = 0; i < size;i++)
  {
      cin >> arr[i];
  }
  
  
   for(int j = 0; j < size;j++)
  {
      sum = arr[j] + sum;
  }
  
   cout << sum<< " is sum of element in the array"<<"\n";
   
    return 0;
}