#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> PrintPlus(vector<vector<int>>& matrix)
{
    int count = matrix.size();

    int mid = (count / 2) ;
    
    cout << "Plus Matrix:\n";
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++)
        {

            if (i == mid || j == mid)
                cout << matrix[i][j] << " ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    

}

int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3, 4, 5},
        {3, 4, 5, 6, 7},
        {7, 6, 5, 4, 3},
        {8, 7, 6, 5, 4},
        {1, 2, 37, 8, 0}};

    PrintPlus(matrix);

    return 0;
}

// Write a function which accepts a 2D array of integers and its size as arguments and displays the elements of middle row and the elements of middle column. (Assuming the 2D Array to be a square matrix with odd dimensions i.e. 3x3, 5x5, 7x7 etc...)

// input :

// 1 2 3 4 5
// 3 4 5 6 7
// 7 6 5 4 3
// 8 7 6 5 4
// 1 2 37 8 0

// output :
//     3
//     5
// 7 6 5 4 3
//     6
//     37