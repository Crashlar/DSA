#include <iostream>
using namespace std;

// Function to calculate binomial coefficient C(n, k)
int binomialCoeff(int n, int k) {
    int res = 1;
    for (int i = 0; i < k; ++i) {
        res *= (n - i);
        res /= (i + 1);
    }
    return res;
}

// Function to print Pascal's Triangle
void printPascalsTriangle(int rows) {
    for (int i = 0; i < rows; i++) {
        // Print spaces for alignment
        for (int space = 0; space < rows - i - 1; space++) {
            cout << "  ";
        }

        // Print binomial coefficients
        for (int j = 0; j <= i; j++) {
            cout << binomialCoeff(i, j) << "   ";
        }
        cout << endl;
    }
}

int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    if (rows <= 0) {
        cout << "Please enter a positive number.\n";
        return 1;
    }

    printPascalsTriangle(rows);
    return 0;
}
