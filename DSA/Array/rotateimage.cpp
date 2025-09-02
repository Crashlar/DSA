#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> rotate(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    // transpose

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
    // reverse each row
    // traversing in each row
    for (int k = 0; k < n; k++)
    {

        int i = 0, j = n - 1;
        while (i <= j )
        {
            int temp = matrix[k][i];
            matrix[k][i] = matrix[k][j];
            matrix[k][j] = temp;
            i++;
            j--;
        }
        
    }
    return matrix ; 
}

int main()
{
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    
    vector<vector<int>> roatated = rotate(matrix);

    cout << "Rotated 90 degree clockwise Matrix:\n";
    for (const auto & row : roatated) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

}
// 48
