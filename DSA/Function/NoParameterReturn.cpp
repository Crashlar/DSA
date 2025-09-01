#include <iostream>
#include <string>
using namespace std;

// Function: Returns current system mode 
string getSystemMode() {
    return "Development"; }

int main() {
    string mode = getSystemMode();

    // Display the result
    cout << "Current System Mode: " << mode << endl;

    return 0;
}
