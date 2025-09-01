#include <iostream>
using namespace std;

// This function creates a local variable and returns its address.
// But once the function ends, the variable is destroyed.
int *getDanglingPointer()
{
    int localValue = 42;
    return &localValue;
}

void demoDanglingPointer()
{
    int *ptr = getDanglingPointer(); // ptr now holds a dangling address

    cout << "Trying to use a dangling pointer..." << endl;
    cout << "Address stored in ptr: " << ptr << endl;

    // The value at ptr is unpredictable — it might crash or show garbage
    cout << "Value at ptr (undefined behavior): " << *ptr << endl;
}

int main()
{
    demoDanglingPointer();
    return 0;
}
