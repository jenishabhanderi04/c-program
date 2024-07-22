#include <iostream>
#include <string>
using namespace std;

int main() {
  
  string str,count,original;
  
  cout<<"enter the string = ";
  
  getline(cin,str);
  
  original = str;

for(int i = str.length() - 1 ; i >= 0 ; i--)
{
    count = count + str[i];
    
}

if (count == original)
{
    cout<< "string is palindrone";
}

else
{
    cout<< "string is not palindrone";
}
cout<<count;

    return 0;
}   