#include <iostream>
using namespace std;
int main() {

int i,n;
int factorial = 1;


cout << "enter the number = ";
cin>>n;

for( i = 1 ; i <= n ; i++)
{
   factorial = factorial * i;
   
}
 cout << factorial;
    return 0;
}