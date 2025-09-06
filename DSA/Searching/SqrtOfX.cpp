#include <iostream>
using namespace std;
int sqrt(int num)
{
    int low = 0;
    int high = num;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (mid * mid == num)
            return mid;
        else if (mid * mid > num)
            high = mid - 1;
        else
            low = mid + 1;
    }
}

int main()
{
    int num = 24;

    cout << sqrt(num);
}