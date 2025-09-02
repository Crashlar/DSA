#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // Input matrix
    vector<vector<int>> arr = {
        {1, 2, -3, 4},
        {0, 0, -4, 2},
        {1, -1, 2, 3},
        {-4, -5, -7, 0}
    };

    int m = arr.size();       // number of rows
    int n = arr[0].size();    // number of columns

    // Create a prefix sum matrix
    vector<vector<int>> prefix(m, vector<int>(n, 0));

    // Build the prefix sum matrix
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            prefix[i][j] = arr[i][j];

            if (i > 0) prefix[i][j] += prefix[i - 1][j];
            if (j > 0) prefix[i][j] += prefix[i][j - 1];
            if (i > 0 && j > 0) prefix[i][j] -= prefix[i - 1][j - 1];
        }
    }

    // Define coordinates for the rectangle
    int l1 = 1, r1 = 2, l2 = 3, r2 = 3;

    // Use inclusion-exclusion to get the sum of the submatrix
    int total = prefix[l2][r2];

    if (l1 > 0) total -= prefix[l1 - 1][r2];
    if (r1 > 0) total -= prefix[l2][r1 - 1];
    if (l1 > 0 && r1 > 0) total += prefix[l1 - 1][r1 - 1];

    // Output the result
    cout << "Sum of rectangle from (" << l1 << "," << r1 << ") to (" << l2 << "," << r2 << ") is: " << total << endl;

    return 0;
}


// Given a matrix ‘A’ of dimension n x m and 2 coordinates (l1, r1) and (l2, r2). Return the sum of the rectangle from (l1,r1) to (l2, r2).
// 1 2 -3 4
// 0 0 -4 2
// 1 -1 2 3
// -4 -5 -7 0
// l1 = 1, r1 = 2 , l2 = 3 , r2 = 3