#include <iostream>
using namespace std;

int main()
{
    int arr[] = {-1,5,3,4,0};
    int n = 5;
    for (int ele : arr)
    {
        cout << ele << " ";
    }
    cout << endl;

    // insertion sort
    for (int i = 0; i <= n - 1; i++)
    {
        int j = i;
        // while(arr[j] < arr[j -1])
        // while (j >= 1)
        // {
        //     if (arr[j] >= arr[j - 1])
        //         break;
        //     else swap(arr[j], arr[j - 1]);
        //         j--;
        // }

        while (j >= 1 && arr[j] < arr[j - 1])
        {
            // worst case n(n-1)/2
            // average me same lagbhag 
            // best case - O(n)
            swap(arr[j], arr[j - 1]);
            j--;
        } 
    }

    for (int ele : arr)
    {
        cout << ele << " ";
    }
}