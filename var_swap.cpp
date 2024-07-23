#include <iostream>
using namespace std;

int main() {
    int a,b;
    cout << "enter the variable a =";
    cin >> a;
    cout << "enter the variable b =";
    cin >> b;
    
    a = a+b;
    b = a-b;
    a = a-b;
    
    cout << "a value is now:"<<a;
    cout <<"b value is now:"<<b;
    
    return 0;
}
