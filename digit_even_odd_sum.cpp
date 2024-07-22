#include <iostream>
using namespace std;

int main() {
    int n,evensum,oddsum,rem;
    
    cout << "Enter the number = ";
    cin >> n;
    
  while(n!= 0)
  {
      rem = n % 10;
    
      if (n % 2 == 0)
      {
          evensum = evensum + rem;
      }
      else
      {
          oddsum= oddsum + rem;
      }
        n = n / 10;
  }
  cout << "even sum = "<< evensum << "\n";
  cout << "odd sum = "<<oddsum;
    
    return 0;
}
