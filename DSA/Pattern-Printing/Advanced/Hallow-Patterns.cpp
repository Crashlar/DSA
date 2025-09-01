#include <iostream>
using namespace std;

void printHollowSquare(int size)
{
    for (int row = 0; row < size; row++)
    {
        for (int col = 0; col < size; col++)
        {
            // Print star only at borders
            if (row == 0 || row == size - 1 || col == 0 || col == size - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main()
{
    int size;
    cout << "Enter size of hollow square: ";
    cin >> size;

    printHollowSquare(size);

    return 0;
}
