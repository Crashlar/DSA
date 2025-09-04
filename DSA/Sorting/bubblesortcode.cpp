#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n = 8;
    int arr[] = {99,-4 , 5, 4, 6, 3, 2, 1};

    // for (int i = 0; i < n - 1; i++)
    // { // n-1 passes

    //     // traverse
    //     for (int j = 0; j < n - i - 1 ; j++) // 'n -i -1'  runs only possible terms (or) last sorted elements  will not checked everytime in sorted 
    //     {
    //         if (arr[j] > arr[j+1]){
    //             // swap
    //             swap(arr[j], arr[j+1]);
    //         }
    //     }
    //     // Time complexity 
    //         // O(n^2)
    //     // Space complexity 
    //         // O(1)
    // }

    // bubble sort optimized 
    for (int i = 0; i < n - 1; i++)
    { // n-1 passes
        
        // traverse
        bool flag = true;
        for (int j = 0; j < n - i - 1 ; j++) 
        {
            if (arr[j] > arr[j+1]){
                // swap
                swap(arr[j], arr[j+1]);
                flag = false;
            }
        }
        if ( flag  == true){ // swap didnt happen
            break;
        }
    }

    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<< " ";
    }
    
}