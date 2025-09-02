#include <iostream>
using namespace std;
/*
int main()
{
    int m;

    // Input dimensions
    cout << "Enter rows of matrix: ";
    cin >> m;
    int n;
    cout << "Enter columns of  matrix: ";
    cin >> n;
    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << endl;
    // wave print
    for (int i = 0; i < m; i++)
    {
        // even row
        if (i % 2 == 0)
        {
            for (int j = 0; j < n; j++)
            {
                cout << arr[i][j] << " ";
            }
        }
        else
        {
            for (int j = n - 1; j >= 0; j--)
            {
                cout << arr[i][j] << " ";
            }
        }
    }

    return 0;
}
*/

/*
int main()
{
    int m = 3, n = 3;

    int arr[m][n] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    // wave print
    for (int i = n - 1; i >= 0; i--)
    {
        // even row
        if (i % 2 == 0)
        {
            for (int j = 0; j < n; j++)
            {
                cout << arr[i][j] << " ";
            }
        }
        else
        {
            for (int j = n - 1; j >= 0; j--)
            {
                cout << arr[i][j] << " ";
            }
        }
    }

    return 0;
}
*/

// colm wise printing

int main()
{
    int m = 3, n = 3;
    int arr[m][n] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    cout << endl;
    for (int j = 0; j < n; j++)
    {
        // even row
        if (j % 2 == 0)
        {
            for (int i = 0; i < m; i++)
            {
                cout << arr[i][j] << " ";
            }
        }
        else
        {
            for (int i = m - 1; i >= 0; i--)
            {
                cout << arr[i][j] << " ";
            }
        }
    }

    return 0;
}