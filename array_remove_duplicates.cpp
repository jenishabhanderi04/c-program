#include <iostream>
using namespace std;

int main() {
    int size;

    cout << "Enter the size of array: ";
    cin >> size;

    int arr[size];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "\nOriginal array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    int newSize = 0; // Variable to keep track of the size of the array without duplicates
    for (int i = 0; i < size; i++) {
        bool duplicate = false;
        for (int j = 0; j < newSize; j++) {
            if (arr[i] == arr[j]) {
                duplicate = true;
                break;
            }
        }
        if (!duplicate) {
            arr[newSize] = arr[i];
            newSize++;
        }
    }

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newSize; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}
