    #include <iostream>
using namespace std;
int main() {

int i,n,rem ,sum;

cout << "enter the digit = ";
cin>>n;

while(n != 0)
{
    rem = n % 10;
   sum = sum + rem;
    n = n / 10;
}
 cout << sum;
    return 0;
}