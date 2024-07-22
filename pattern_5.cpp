          /* 
          * 
        * * * 
      * * * * * 
    * * * * * * * 
  * * * * * * * * * 
* * * * * * * * * * *  
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Enter the number = ";
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = i; j < n; j++) {
            cout << "  ";
        }
        // Print stars
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << "* ";
        }
        cout << endl;
    }
    
    return 0;
}
