#include <iostream>
using namespace std;

int findSmallestMissing(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] != i + 1) {
            return i + 1;
        }
    }
    return size + 1;
}

int main() {
    int arr[] = {1, 2, 3, 5, 6, 7}; // using already sorted array with missing 4
    int size = sizeof(arr) / sizeof(arr[0]);

    int missing = findSmallestMissing(arr, size);
    cout << "The smallest missing positive element is: " << missing << endl;

    return 0;
}


// WAP to find the smallest missing positive element in the sorted Array that contains only positive elements.