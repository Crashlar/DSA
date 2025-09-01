#include <iostream>
using namespace std;

// This function shows how a void pointer can point to different types of data.
void demoVoidPointer() {
    int age = 30;
    float height = 5.9;

    void* ptr; // A generic pointer — it doesn't care what type it points to

    // Let's point it to an integer
    ptr = &age;
    cout << "Void pointer pointing to int: " << *(static_cast<int*>(ptr)) << endl;

    // to print the void so call the static_cast that print the values or address

    // Now let's point it to a float
    ptr = &height;
    cout << "Void pointer pointing to float: " << *(static_cast<float*>(ptr)) << endl;
}

int main() {
    cout << "Exploring void pointers in C++..." << endl;
    demoVoidPointer();
    return 0;
}
