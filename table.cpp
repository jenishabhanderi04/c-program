#include <iostream>
using namespace std;
int main() {

int n,i ;
int t;

cout << "enter the number = ";
cin>>n;

for( i = 1 ; i <= 10 ; i++)
{
    
    t = n * i; 
   cout<<n <<" * "<< i<<" = "<<t<<"\n";
}
//cout<< t << n * i;
    return 0;
}
