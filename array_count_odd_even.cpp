#include <iostream>
using namespace std;

int main() {
    
 int size,evennum,oddnum = 0;
 
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
        evennum = evennum + 1;
    }
    else
    {
        oddnum = oddnum + 1;
    }
 }
 
 cout <<"evennum is = " << evennum<<"\n";
 cout <<"oddnum is = " << oddnum;
    return 0;
}