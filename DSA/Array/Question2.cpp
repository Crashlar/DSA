#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[8] = {9, 100, 1, 2, 102, 4, 5, 6};
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < 8; i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN)
        cout << "There is no second largest element.";
    else
        cout << "Second largest element is " << secondLargest;

    return 0;
}

// Find the second largest element in the given Array in one pass.