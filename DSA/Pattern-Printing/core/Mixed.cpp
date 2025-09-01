#include <iostream>
using namespace std;

void printMixedPattern(int rows) {
    for (int i = 0; i < rows; i++) {
        // Print alphabets
        for (int j = 0; j <= i; j++) {
            cout << char('A' + j);
        }

        // Print numbers
        for (int j = 1; j <= i + 1; j++) {
            cout << j;
        }

        // Print stars
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }

        cout << endl;
    }
}

int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;
    printMixedPattern(rows);
    return 0;
}
