#include <iostream>
#include <vector>
using namespace std;

int BinarySearch(vector<int> &arr, int n)
{
    int low = 0;
    int high = n - 1;
    int ans = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == mid)
            low = mid + 1;
        else
        {
            ans = mid;
            high = mid - 1;
        }
    }
    return ans;
}

int LinearSearch(vector<int> arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (i != arr[i])
        {
            return i;
            break;
        }
    }
    // Time complexity = O(logn)
    return -1;
}

int main()
{
    vector<int> arr = {0, 1, 2, 3, 4, 8, 9, 12};
    int size = arr.size();
    cout << LinearSearch(arr, size);
    cout << endl
         << BinarySearch(arr, size);
}