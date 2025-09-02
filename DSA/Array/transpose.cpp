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

    // taking user input
    cout << "Enter first " << row << "*" << colm << " matrix : " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colm; j++)
        {
            cin >> arr[i][j];
        }
    }
    // storing the value in new matrix
    int t[colm][row];
    for (int i = 0; i < colm; i++)
    {
        for (int j = 0; j < row; j++)
        {
            t[i][j] = arr[j][i];
        }
    }

    // printing the new matrix
    cout << endl<< "Printing the transpose of Matrix :" << endl;
    for (int i = 0; i < colm; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout << t[i][j] << " ";
        }
        cout << endl;
    }
}