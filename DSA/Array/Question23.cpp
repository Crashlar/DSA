#include <iostream>
#include <vector>
using namespace std;
void ToTranspose(vector<vector<int>> &matrix, int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
}
vector<vector<int>> Rotate90degreeAntiClockwise(vector<vector<int>> &arr, int m, int n)
{
    // Calling Transpose
    // Calculation of transpose matrix
    ToTranspose(arr, m, n);

    // swap the value
    // traversing in each row
     for (int j = 0; j < n; j++) {
        int top = 0, bottom = m - 1;
        while (top < bottom) {
            int temp = arr[top][j];
            arr[top][j] = arr[bottom][j];
            arr[bottom][j] = temp;
            top++;
            bottom--;
        }
    }
    return arr;
}
int main()
{
    vector<vector<int>> arr = {
        {1,2,3,},
        {4, 5, 6},
        {7, 8, 9}
    };
    int m = arr.size();
    int n = arr[0].size();
    vector<vector<int>> rotated = Rotate90degreeAntiClockwise(arr, m, n);

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << rotated[i][j] << " ";
        }
        cout << endl;
    }
}
// Write a program to rotate the matrix by 90 degrees anti-clockwise.