#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n = 9;
    int arr[] = {5 , 0 , 1 , 2 , 0 , 0 , 4 , 0 , 3};

    for (int i = 0; i < n - 1; i++){ // n-1 passes

        // traverse
        for (int j = 0; j < n - i - 1; j++) // 'n -i -1'  runs only possible terms (or) last sorted elements  will not checked everytime in sorted
        {
            if (arr[j] == 0)
            {
                // swap
                swap(arr[j], arr[j + 1]);
            }
        }
        // Time complexity
        // O(n^2)
        // Space complexity
        // O(1)
    }

    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
