#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> addMatrix(vector<vector<int>>& a, vector<vector<int>>& b) {
    int rows = a.size();
    int cols = a[0].size();
    vector<vector<int>> result(rows, vector<int>(cols));

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = a[i][j] + b[i][j];
        }
    }

    return result;
}

int main()
{
    vector<vector<int>> matrix1 = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    vector<vector<int>> matrix2 = {
        {4 , 5 ,8},
        {0 , 0 , 8 },
        {1 , 2, 0 }
    };

    vector<vector<int>> addition = addMatrix(matrix1 , matrix2);

    // Print result
    for (const auto& row : addition) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}


// Write a program to store 10 at every index of a 2D matrix with 5 rows and 5 columns.

