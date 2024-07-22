#include <iostream>
using namespace std;

int main() {

int n,i;
bool isprime = true;

cout << "enter the number = ";
cin>>n;
 
if(n <= 1)
{
    isprime = false;
}

else
{
    for(i = 2 ; i<= n/2 ; i++)
        {
          if(n % i == 0)
            {
                isprime = false;
            }
        }
}

if(isprime)
{
    cout << "number is prime";
}

else
{
    cout<< "number is not prime";
}
    return 0;
}