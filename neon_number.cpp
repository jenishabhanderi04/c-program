#include <iostream>
using namespace std;

int main() {

int n,rem,sum = 0;
int sqrt;
int original;

cout << "enter the number = ";
cin >> n;

original = n;

sqrt = n * n ;

while(sqrt != 0)
{
    rem = sqrt % 10;
    sum = sum + rem;
    sqrt = sqrt / 10;
    
}

if (sum == original)
{
    cout<< "neon number";
}
else
{
    cout << "not neon number";
}
    return 0;
}