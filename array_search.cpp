#include <iostream>
using namespace std;

int main() {
    
 int size,search;
 int flag ;
 
 cout<<"enter the size of array = ";
 cin >> size;
 
 cout <<"enter the search element = ";
 cin >> search;
 
  int arr[size];
 
 for(int i = 0 ; i < size ; i++)
 {
     cin >> arr[i];
 }
 
 for(int j = 0 ; j < size ; j++)
 {
    if(search == arr[j])
    {
        flag = 1;
    }
    else
    {
        flag = 0;
    }
 }

if(flag == 1)
{
    cout << "element found";
}
else
{
    cout << "element not found";
}
    return 0;
}