// Write a program in C to display the n terms of harmonic series and their sum.
// 1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n terms
// Test Data :
// Input the number of terms : 5
// Expected Output :
// 1/1 + 1/2 + 1/3 + 1/4 + 1/5 +
// Sum of Series up to 5 terms : 2.283334



#include <iostream>
using namespace std;

int main() {
   int n; // n should be an integer
   float s = 0.0; // Initialize sum to 0.0

   cout << "Enter the number of terms: ";
   cin >> n;

   for(int i = 1; i <= n; i++) { // Loop should start from 1
       s += 1.0 / i; // Calculate the reciprocal and add to sum
       cout << "1/" << i << " + ";
   }
   
   cout << "\nSum of series up to " << n << " terms: " << s << endl;

   return 0;
}
