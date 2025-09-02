#include <iostream>
#include <vector>
using namespace std;

int FindLargest(vector<vector<int>> &matrix)
{
    int maxVal = INT32_MIN;
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            if (matrix[i][j] > maxVal)
            {
                maxVal = matrix[i][j];
            }
        }
    }
    return maxVal;
}

int main()
{
    vector<vector<int>> matrix = {
        {1, 3, 4, 6},
        {2, 4, 5, 7},
        {3, 5, 6, 8},
        {4, 6, 7, 9}};

    int LargestNum = FindLargest(matrix);
    cout << "Largest element: " << LargestNum<< endl;
}

// Write a C++ program to find the largest element of a given 2D array of integers.
// 1 3 4 6
// 2 4 5 7
// 3 5 6 8
// 4 6 7 9