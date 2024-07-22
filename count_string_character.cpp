#include <iostream>
#include <string>
using namespace std;

int main() {
    
string str;
int count;
    
 cout << "enter the string = ";
 cin >> str;
 
 for(int i = 0; str[i] != 0 ; i ++)
 {
   count = count + 1;
 }
 
 cout<<count;
 
    return 0;
}