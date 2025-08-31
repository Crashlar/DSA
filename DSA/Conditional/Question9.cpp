#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Go ahead, type any character: ";
    cin >> ch;

    // Let's spell it out for you since apparently it's hard
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        cout << " it's an Alphabet. Not that hard to guess." << endl;
    }
    else if (ch >= '0' && ch <= '9') {
        cout << " a Digit" << endl;
    }
    else {
        cout << "Surprise,a Special Character" << endl;
    }

    return 0;
}

// Write a C++ program to input any character and check whether it is the alphabet, digit or special character.