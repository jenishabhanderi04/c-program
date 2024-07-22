#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, rev;
    int wordCount = 0;
    bool inWord = false;
    string currentWord; // Temporary string to hold the current word in reverse

    cout << "Enter the string: ";
    getline(cin, str);  // Read the entire line including spaces

    // Iterate through the string in reverse
    for (int i = str.length() - 1; i >= 0; i--) {
        if (str[i] == ' ') {
            if (inWord) {
                // Reverse the current word and append it to 'rev'
                rev = currentWord + ' ' + rev;
                wordCount++;
                inWord = false;
                currentWord.clear(); // Clear currentWord for the next word
            }
        } else {
            inWord = true;
            currentWord += str[i]; // Build the current word in reverse
        }
    }

    // Handle the last word
    if (inWord) {
        rev = currentWord + ' ' + rev;
        wordCount++;
    }

    cout << "Number of words in the string: " << wordCount << endl;
    cout << "Reversed words in the string: " << rev << endl;

    return 0;
}
