#include <iostream>
using namespace std;
/*
int main()
{
    int r1, c1, r2, c2;

    // Input dimensions
    cout << "Enter rows and columns of first matrix: ";
    cin >> r1 >> c1;

    cout << "Enter rows and columns of second matrix: ";
    cin >> r2 >> c2;

    // Check if multiplication is possible
    if (c1 != r2)
    {
        cout << "Matrix multiplication not possible! (columns of A must equal rows of B)" << endl;
        return 0;
    }

    // Declare matrices
    int A[100][100], B[100][100], result[100][100];

    // Input first matrix
    cout << "Enter elements of first matrix:" << endl;
    for (int i = 0; i < r1; ++i)
    {
        for (int j = 0; j < c1; ++j)
        {
            cin >> A[i][j];
        }
    }

    // Input second matrix
    cout << "Enter elements of second matrix:" << endl;
    for (int i = 0; i < r2; ++i)
    {
        for (int j = 0; j < c2; ++j)
        {
            cin >> B[i][j];
        }
    }

    // Initialize result matrix with 0
    for (int i = 0; i < r1; ++i)
    {
        for (int j = 0; j < c2; ++j)
        {
            result[i][j] = 0;
        }
    }

    // Matrix multiplication logic
    for (int i = 0; i < r1; ++i)
    {
        for (int j = 0; j < c2; ++j)
        {
            for (int k = 0; k < c1; ++k)
            {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Output result
    cout << "Resultant matrix after multiplication:" << endl;
    for (int i = 0; i < r1; ++i)
    {
        for (int j = 0; j < c2; ++j)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

*/

int main()
{
    int m;
    cout << "Enter rows of 1st matrix : ";
    cin >> m;

    int n;
    cout << "Enter cols of 1st matrix : ";
    cin >> n;

    int p;
    cout << "Enter rows of 2nd Matrix : ";
    cin >> p;
    int q;
    cout << "Enter cols of 2nd Matrix : ";
    cin >> q;

    if (n == p)
    {
        int a[m][n];
        cout << "Enter Elements of 1st matrix : "<< endl;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }
        int b[p][q];
        cout << "Enter elements of 2nd Matrix  :"<< endl;;
        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < q; j++)
            {
                cin >> b[i][j];
            }
        }
        // resultant matrix
        int res[m][q];

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                // multiply
                res[i][j] = 0; // set initial value
                for (int k = 0; k < p; k++)
                {
                    res[i][j] += a[i][k] * b[k][j];
                }
            }
        }
        // printing the matrix
        cout << "After matrx Multiplication : ";
        cout << endl;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                cout << res[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
        // n != p
        cout << "The matrix multiplication is not possible.";

        return 0 ; 
}
