#include <iostream>
#include <string>
using namespace std;

int main() {
    
string str,revstr;
    
 cout << "enter the string = ";
 cin >> str;
 
 for(int i = str.length() - 1; i >= 0 ; i --)
 {
     revstr = revstr + str[i]; 
 }
 
 cout<<revstr;
 
    return 0;
}