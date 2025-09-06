#include <iostream>
#include <vector>
using namespace std;

int findFirstOccurrence(vector<int> &arr, int target)
{
    int low = 0, high = arr.size() - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
        {
            if (mid == 0 || arr[mid - 1] < target)
            {
                return mid; // Found first occurrence
            }
            else
            {
                high = mid - 1; // Search in the left half
            }
        }
        else if (arr[mid] < target)
        {
            low = mid + 1; // Search in the right half
        }
        else
        {
            high = mid - 1; // Search in the left half
        }
    }
    return -1; // Target not found
}

int findLastOccurrence(vector<int> &arr, int target)
{
    int low = 0, high = arr.size() - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
        {
            if (mid == arr.size() - 1 || arr[mid + 1] > target)
            {
                return mid; // Found last occurrence
            }
            else
            {
                low = mid + 1; // Search in the right half
            }
        }
        else if (arr[mid] < target)
        {
            low = mid + 1; // Search in the right half
        }
        else
        {
            high = mid - 1; // Search in the left half
        }
    }
    return -1; // Target not found
}

vector<int> searchRange(vector<int> &arr, int target)
{
    vector<int> result = {-1, -1}; // Initialize result with -1 for both positions
    result[0] = findFirstOccurrence(arr, target);
    if (result[0] != -1)
    {
        result[1] = findLastOccurrence(arr, target);
    }
    return result;
}

int main()
{
    vector<int> arr = {1, 2, 2, 3, 3, 3, 3, 3, 4, 4, 5, 8, 9};
    int n = arr.size();
    int target = 3;

    vector<int> v = searchRange(arr, target);

    for (int ele : v)
    {
        cout << ele << " ";
    }
}