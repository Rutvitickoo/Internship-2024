#include <iostream>
using namespace std;

void displayArray(int arr[], int size) {
    cout << "Array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int a[4] = {4, 6, 7, 8};
    const int capacity = 8; // Maximum size of the array
    int size = 4; // Current size of the array

    int input;
    while (true) {
        cout << "Enter a number (1-5 to insert, 5 to stop): ";
        cin >> input;

        if (input == 5) {
            cout << "Program stopped." << endl;
            break;
        } else if (input >= 1 && input <= 4) {
            int newNumber;
            cout << "Enter the new number to insert: ";
            cin >> newNumber;

            if (size < capacity) {
                a[size] = newNumber;
                ++size;
                displayArray(a, size);
            } else {
                cout << "Array is full, cannot insert more elements." << endl;
            }
        } else {
            cout << "Invalid input. Please enter a number from 1 to 5." << endl;
        }
    }

    return 0;
}
