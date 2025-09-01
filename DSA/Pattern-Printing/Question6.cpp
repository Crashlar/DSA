#include <iostream>
using namespace std;

int main() {
    int rows = 4;
    int cols = 6;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            // Print * at borders, space inside
            if (i == 1 || i == rows || j == 1 || j == cols) cout << "*";
                else cout << " ";
        }
        cout << endl;
    }

    return 0;
}



// Sample Input : m = 4, n = 6

// Sample Output :
// ******
// *    *
// *    *
// ******