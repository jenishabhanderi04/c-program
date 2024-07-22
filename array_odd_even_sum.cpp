#include <iostream>
using namespace std;

int main() {
    
 int size,evensum,oddsum = 0;
 
 cout<<"enter the size of array = ";
 cin >> size;

  int arr[size];
 
 for(int i = 0 ; i < size ; i++)
 {
     cin >> arr[i];
 }
 
 for(int j = 0 ; j < size ; j++)
 {
    if(arr[j] % 2 == 0)
    {
        evensum = evensum + arr[j];
    }
    else
    {
        oddsum = oddsum + arr[j];
    }
 }
 
 cout <<"evensum is = " << evensum<<"\n";
 cout <<"oddsum is = " << oddsum;
    return 0;
}