#include <iostream>
using namespace std;

class Box {
private:
    int length;

public:
    Box(int l) : length(l) {}

    // Declare friend function
    friend void printLength(Box b);
};

// Definition of friend function
void printLength(Box b) {
    cout << "Length: " << b.length << endl;  // Accessing private member
}

int main() {
    Box b1(10);
    printLength(b1);  // Works because it's a friend
    return 0;
}
