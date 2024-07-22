#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, vowels, consonants;
    int vowelCount = 0, consonantCount = 0;

    cout << "Enter the string: ";
    cin >> str;

    // Iterate through the string
    for (int i = 0; i < str.length(); i++) {
        char ch = str[i];
        // Check if the character is a vowel (both lowercase and uppercase)
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowels += ch; // Accumulate vowels
            vowelCount++; // Increment vowel count
        }
        // Check if the character is a consonant
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            consonants += ch; // Accumulate consonants
            consonantCount++; // Increment consonant count
        }
    }

    // Output the results
    cout << "Vowels: " << vowels << endl;
    cout << "Number of vowels: " << vowelCount << endl;
    cout << "Consonants: " << consonants << endl;
    cout << "Number of consonants: " << consonantCount << endl;

    return 0;
}
