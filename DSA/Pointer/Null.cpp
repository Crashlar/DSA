#include <iostream>
using namespace std;

// This function demonstrates how to use a NULL pointer safely.
void demoNullPointer() {
    int* ptr = nullptr; // We explicitly say: this pointer points to nothing.

    if (ptr == nullptr) {
        cout << "Pointer is NULL. It doesn't point to any memory yet." << endl;
    } else {
        cout << "Pointer is pointing to a valid memory location." << endl;
    }

    // Trying to dereference a NULL pointer would crash the program.
    // So we always check before using it.
    // cout << *ptr; // Don't do this unless you're sure ptr is not NULL.
}

int main() {
    cout << "Checking behavior of a NULL pointer..." << endl;
    demoNullPointer();
    return 0;
}
