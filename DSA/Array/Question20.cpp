#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> addMatrix(vector<vector<int>> &a, vector<vector<int>> &b)
{
    // calculation m , n of matrix
    int rows = a.size();
    int cols = a[0].size();
    // intialize the new vector
    vector<vector<int>> addition(rows, vector<int>(cols));
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < b.size(); j++)
        {
            addition[i][j] = a[i][j] + b[i][j];
        }
    }
    return addition;
}

int main()
{
    vector<vector<int>> matrix1 = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    vector<vector<int>> matrix2 = {
        {4, 5, 8},
        {0, 0, 8},
        {1, 2, 0}};

    // calling the function
    vector<vector<int>> addition = addMatrix(matrix1, matrix2);

    // Print the result
    cout << "Sum of matrix a and b : " << endl;
    for (const auto &row : addition)
    {
        for (int val : row)
        {
            cout << val << " ";
        }
        cout << endl;
    }
}


// Write a program to add two matrices and save the result in one of the given matrices.
// 1 2 3
// 4 5 6
// 7 8 9

// 4 5 8
// 0 0 8
// 1 2 0