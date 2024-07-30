#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter the number: ";
    cin >> n;

    cout << "The positive divisors: ";
    for(int i = 1; i < n; i++) { // Loop to find all divisors of n
        if(n % i == 0) {
            cout << i << " "; // Print the divisor
            sum  = sum + i; // Add the divisor to the sum
        }
    }

    cout << "\nThe sum of the divisors is: " << sum << endl;

    if(sum == n) {
        cout << "So, the number is perfect." << endl;
    } else {
        cout << "So, the number is not perfect." << endl;
    }

    return 0;
}
