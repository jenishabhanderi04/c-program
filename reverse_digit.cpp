#include <iostream>
using namespace std;
int main() {

int i,n,rem ,rev;

cout << "enter the digit = ";
cin>>n;

while(n != 0)
{
    rem = n % 10;
    rev = (rev * 10) + rem;
    n = n / 10;
}
 cout << rev;
    return 0;
}