#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

// Function with Parameters and Return Value
int multiply(int a, int b) {
    return a * b;
}

// Function with No Parameters but Return Value
string getGreeting() {
    return "Welcome to Function Demo!";
}

// Function with Parameters but No Return Value
void printVector(const vector<int>& vec) {
    cout << "Vector Elements: ";
    for (int val : vec) {
        cout << val << " ";
    }
    cout << endl;
}

// 4️ Function with No Parameters and No Return Value
void showBanner() {
    cout << "=============================\n";
    cout << "     FUNCTION DEMO SYSTEM    \n";
    cout << "=============================\n";
}

//  Main Function Using All Four Types
int main() {
    // Type 4: No parameters, no return value
    showBanner();

    // Type 2: No parameters, return value
    string message = getGreeting();
    cout << message << endl;

    // Type 1: Parameters and return value
    int result = multiply(6, 7);
    cout << "Multiplication Result: " << result << endl;

    // Type 3: Parameters, no return value
    vector<int> data = {10, 20, 30, 40};
    printVector(data);

    return 0;
}
