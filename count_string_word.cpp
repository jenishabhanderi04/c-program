#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int wordCount = 0;
    bool inWord = false;

    cout << "Enter the string: ";
    getline(cin, str);  // Read the entire line including spaces

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            if (inWord) {
                wordCount++;
                inWord = false;
            }
        } else {
            inWord = true;
        }
    }

    // If the last character was part of a word, count the last word
    if (inWord) {
        wordCount++;
    }

    cout << "Number of words in the string: " << wordCount << endl;

    return 0;
}
