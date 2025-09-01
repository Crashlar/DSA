#include <iostream>
using namespace std;

bool hasDuplicates(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                return true; // Duplicate found
            }
        }
    }
    return false; // No duplicates
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 2}; // Test array
    int size = sizeof(arr) / sizeof(arr[0]);

    if (hasDuplicates(arr, size)) {
        cout << "Array contains duplicates." << endl;
    } else {
        cout << "Array does not contain duplicates." << endl;
    }

    return 0;
}


// Given an array, predict if the array contains duplicates or not.