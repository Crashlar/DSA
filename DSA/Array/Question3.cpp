#include <iostream>
#include<climits>
using namespace std;

int main()
{
    int arr[8] = {9 , 100 , -1 , 2, 102 , 4, 5 , 6};
    int max = INT16_MAX;
    for (int i = 0; i < 8; i++)
    {
        if (max > arr[i])
        {
         max = arr[i];   
        }
    }
    cout << "Minimum value in array is "<< max;
    return 0;
}


// Find the second largest element in the given Array in one pass.

// Find the minimum value out of all elements in the array.