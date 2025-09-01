#include <iostream>
using namespace std;

int main()
{
    int arr[8] = {9 , 100 , 1 , 2, 102 , 4, 5 , 6};
    int max = arr[0] ;
    for (int i = 0; i < 8; i++)
    {
        if (max < arr[i])
        {
         max = arr[i];   
        }
    }
    cout << "Max value in array is "<< max;
    return 0;
}
