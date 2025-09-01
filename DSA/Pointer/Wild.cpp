#include <iostream>
using namespace std;

// This function shows how to use a pointer safely by assigning it a valid address.
void demoSafePointer() {
    int age = 25; // A regular integer variable
    int* agePtr = &age; // Now our pointer knows exactly where to look

    cout << "Safe pointer address: " << agePtr << endl;
    cout << "Value at that address: " << *agePtr << endl;
}

int main() {
    cout << "🔐 Now let's see how to use pointers the right way...\n" << endl;
    demoSafePointer();
    return 0;
}
