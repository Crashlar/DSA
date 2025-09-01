#include <iostream>
#include<climits>
using namespace std;

int main()
{
    int arr[8] = {9 , 100 , 1 , 2, 102 , 4, 5 , 6};
    int max = INT16_MIN;
    for (int i = 0; i < 8; i++)
    {
        if (max < arr[i])
        {
         max = arr[i];   
        }
    }
    int smax = INT16_MIN;
    for (int i = 0; i < 8; i++)
    {
        if(arr[i] != max && smax <arr[i]) 
        smax = arr[i];
    }
    cout << "second Max value in array is "<< smax; 
    return 0;
}
