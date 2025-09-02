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

    int max = INT16_MIN;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colm; j++)
        {
            if( max < arr[i][j])
            max = arr[i][j];
        }
        cout << endl;
    }
    // printing max 
    cout << "max : " <<max; 
    // cout << arr[0][0];
    return 0;
}
