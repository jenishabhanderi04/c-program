//print the 3 multiple print fizz and 5 multiple print buzz and both multiple print the fizzbuzz and also print prime number


#include <iostream>
using namespace std;

int main() {
    bool prime;
    int n;
    cout << "enter the number = ";
    cin >> n;

    for(int i = 1; i <= n; i++) 
    {
        prime = true; // Reset prime status for each number

        if (i <= 1)
        {
            prime = false;
        } 
        else
        {
            for (int j = 2; j <= i / 2; j++) 
            {
                if (i % j == 0)
                {
                    prime = false;
                    break;
                }
            }
        }

        if (i % 3 == 0 && i % 5 == 0) {
            cout << "fizz buzz" << i << "\n";
        } else if (i % 3 == 0) {
            cout << "fizz" << i << "\n";
        } else if (i % 5 == 0) {
            cout << "buzz" << i << "\n";
        } else if (prime) {
            cout << "prime " << i << "\n";
        } else {
            cout << i << "\n";
        }
    }

    return 0;
}
