#include <iostream>
using namespace std;

int main()
{
    int row, colm;
    cout << "Enter the rows : ";
    cin >> row;

    cout << "Enter the colm : ";
    cin >> colm;

    int arr[row][colm];
    // row 0 to 2
    // colm 0 to 2

    // taking user input
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colm; j++)
        {
            cin >> arr[i][j];
        }
    }
    // print the matrix

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colm; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // cout << arr[0][0];
    return 0;
}
