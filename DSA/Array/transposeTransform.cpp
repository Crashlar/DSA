#include <iostream>
using namespace std;

int main()
{
    int m;
    cout << "Enter the  row/colm : ";
    cin >> m;

    int arr[m][m];

    // taking user input
    cout << "Enter first " << m << "*" << m << " matrix : " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    // printing the matrix
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout << arr[i][j]<< " ";
    //     }
    //     cout << endl ;
    // }

    // transpose in the same matrix

    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         // swapping of i , j and j , i
    //         if (i < j)
    //         {
    //             int temp = arr[i][j];
    //             arr[i][j] = arr[j][i];
    //             arr[j][i] = temp;
    //         }
    //     }
    //     cout << endl;
    // }
    // printing the new matrix
    cout << "Printing the transpose of Matrix :" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // or use this 
    for (int i = 0; i < m; i++)
    {
        for (int j = i + 1; j < m; j++)
        {
            // swapping of i , j and j , i

            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
        cout << endl;
    }

    // printing the new matrix
    cout << "Printing the transpose of Matrix :" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout <<  endl;
    }
}
