#include <iostream>
#include <string>
using namespace std;

int main() {
    
    int size;
  
  cout << "enter  the size of array = ";
  cin >> size;
  
  int arr[size],max,min;
  
  for(int i = 0; i < size;i++)
  {
      cin >> arr[i];
  }
  
  
   for(int j = 0; j < size;j++)
  {
      if(arr[j] > max)
      {
           max = arr[j];
      }
      if(arr[j] < min)
      {
          min = arr[j];
      }
  }
  
   cout << max << " is max element in the array"<<"\n";
   cout << min<< " is min element in the array"<<"\n";
  

    return 0;
}