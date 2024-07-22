#include <iostream>
using namespace std;

int main() {
    int n,evennum,oddnum,rem;
    
    cout << "Enter the number = ";
    cin >> n;
    
  while(n!= 0)
  {
      rem = n % 10;
    
      if (n % 2 == 0)
      {
          evennum = evennum + 1;
      }
      else
      {
          oddnum= oddnum + 1;
      }
        n = n / 10;
  }
  cout << "even sum = "<< evennum << "\n";
  cout << "odd sum = "<<oddnum;
    
    return 0;
}
