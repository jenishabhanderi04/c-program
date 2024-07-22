#include <iostream>
using namespace std;

int main() {

int i,n,rem ,rev =0;

int original ;


cout << "enter the digit = ";
cin>>n;

original = n;

while(n != 0)
{
    rem = n % 10;
    rev = (rev * 10) + rem;
    n = n / 10;
}
 cout << rev <<"\n";
 
 if (original == rev)
 {
     cout<<"number is palindrone";
 }
 else
 {
     cout <<"number is not palindrone";
 }
    return 0;
}