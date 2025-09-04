#include <iostream>
using namespace std;

bool isAlmostSorted(int arr[], int n){
    int misplace = 0 ; 
    for(int i = 0; i < n - 1 ; i++ ){
        if ( arr[i] > arr[i+1]){
            misplace++;
            // check misplaced 
            if ( misplace > 1 ){
                return false;
            }
        }
    }
    return true;
}

int main()
{
    int arr[] = {1, 2, 3, 5, 4, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (isAlmostSorted(arr, n))
    {
        cout << "The array is almost sorted." << endl;
    }
    else
    {
        cout << "The array is not almost sorted." << endl;
    }
}

// Check if the given array is almost sorted. (elements are at-most one position away)