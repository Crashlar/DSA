#include <iostream>
using namespace std;

void symmetricPatternsPrinting(int rows) {
    for (int i = 0; i < rows; i++) {
        // Print leading spaces
        for (int space = 0; space < rows - i - 1; space++) {
            cout << " ";
        }

        // Print left side alphabets
        for (int j = 0; j <= i; j++) {
            cout << char('A' + j);
        }

        // Print right side alphabets (mirror)
        for (int j = i - 1; j >= 0; j--) {
            cout << char('A' + j);
        }

        cout << endl;
    }
}

int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;
    symmetricPatternsPrinting(rows);
    return 0;
}
