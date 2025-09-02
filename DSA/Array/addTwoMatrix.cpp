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
    cout << "Enter first " << row << "*" << colm << " matrix : " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colm; j++)
        {
            cin >> arr[i][j];
        }
    }

    int arr1[row][colm];

    // user input taking
    cout << "Enter second " << row << "*" << colm << " matrix : " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colm; j++)
        {
            cin >> arr1[i][j];
        }
    }

    // add the matrix
    cout << endl << "Printing the addition of matrix : "<< endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colm; j++)
        {
            cout << arr[i][j] + arr1[i][j]<< " ";
        }
        cout << endl ;
    }

    // // print the matrix
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < colm; j++)
    //     {
    //         cout << result[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    return 0;
}
