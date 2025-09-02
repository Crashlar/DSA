#include <iostream>
using namespace std;

int main()
{
    int m, n;

    cout << "Enter rows of matrix: ";
    cin >> m;
    cout << "Enter columns of matrix: ";
    cin >> n;

    int arr[100][100]; // Static max size

    cout << "Enter elements of the matrix:" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    int minr = 0, maxr = m - 1;
    int minc = 0, maxc = n - 1;

    cout << "\nSpiral order of matrix is: ";
    while (minr <= maxr && minc <= maxc)
    {
        // Right
        for (int j = minc; j <= maxc; j++)
        {
            cout << arr[minr][j] << " ";
        }
        minr++;

        // Down
        for (int i = minr; i <= maxr; i++)
        {
            cout << arr[i][maxc] << " ";
        }
        maxc--;

        // Left
        if (minr <= maxr)
        {
            for (int j = maxc; j >= minc; j--)
            {
                cout << arr[maxr][j] << " ";
            }
            maxr--;
        }

        // Up
        if (minc <= maxc)
        {
            for (int i = maxr; i >= minr; i--)
            {
                cout << arr[i][minc] << " ";
            }
            minc++;
        }
    }

    return 0;
}
