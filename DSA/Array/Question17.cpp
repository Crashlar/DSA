#include <iostream>
#include <vector>
using namespace std;

void CalculateRowMax(const vector<vector<int>> &matrix)
{
    int m = matrix.size();
    int n = matrix[0].size();

    int maxSum = INT16_MIN;
    int rowIndex = -1;

    for (int i = 0; i < m; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum += matrix[i][j];
        }
        if (sum > maxSum)
        {
            maxSum = sum;
            rowIndex = i;
        }
    }

    // Print result
    cout << "Row with maximum sum is: Row " << (rowIndex + 1) << endl;
    cout << "Sum = " << maxSum << endl;
    cout << "Row elements: ";
    for (int j = 0; j < matrix[0].size(); j++)
    {
        cout << matrix[rowIndex][j] << " ";
    }
    cout << endl;
}

int main()
{
    vector<vector<int>> matrix = {
        {1, 3, 5, 7},
        {3, 4, 7, 8},
        {1, 4, 12, 3}};

    CalculateRowMax(matrix);

    return 0;
}


// Write a program to print the row number having the maximum sum in a given matrix.
// 1 3 5 7
// 3 4 7 8
// 1 4 12 3
