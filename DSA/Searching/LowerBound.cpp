#include <iostream>
using namespace std;

int lowerBound(int arr[], int n, int target)
{
    bool flag = false;
    int lo = 0;
    int hi = n - 1;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;

        if (arr[mid] == target)
        {
            flag = true;
            return arr[mid - 1];
            break;
        }
        else if (arr[mid] < target)
            lo = mid + 1;
        else if (arr[mid] > target)
            hi = mid - 1;
    }
    if (flag == false)
        return arr[hi];
}

int UpperBound(int arr[], int n, int target)
{
    bool flag = false;
    int lo = 0;
    int hi = n - 1;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;

        if (arr[mid] == target)
        {
            flag = true;
            return arr[mid + 1];
            break;
        }
        else if (arr[mid] < target)
            lo = mid + 1;
        else if (arr[mid] > target)
            hi = mid - 1;
    }
    if (flag == false)
        return arr[lo];
}

int main()
{
    int arr[] = {1, 2, 4, 5, 9, 15, 18, 21, 24};
    int n = 9;
    int x = 22;
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] > x)
    //     {
    //         // print one lower index value
    //         cout << arr[i - 1];
    //         break;
    //     }
    //     // Time complexity O(n)
    // }

    cout << lowerBound(arr, n, x);
    cout << endl
         << UpperBound(arr, n, x);
}