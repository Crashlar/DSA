#include <iostream>
#include <vector>
using namespace std;

int FirstOccurence(vector<int> &arr, int n, int target)
{
    int low = 0;
    int high = n - 1;
    bool flag = false;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
        {
            if (arr[mid - 1] != target)
            {
                flag = true;
                return mid;
                break;
            }
            else
            {
                // arr[mid -1 ] == x
                high = mid - 1;
            }
        }
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main()
{
    vector<int> arr = {1, 2, 2, 3, 3, 3, 3, 3, 4, 4, 5, 8, 9};
    int n = arr.size();
    int target = 3;
    cout << FirstOccurence(arr, n, target);
}