#include <iostream>
#include <vector>
using namespace std;

int BinarySearch(vector<int>& arr){

}

int peakIndexInMountainArray(vector<int>& arr)
{
    int idx = -1 ; 
    int n = arr.size();
    for( int i = 1 ; i<= n-2;i++){
        if ( arr[i] > arr[i-1] && arr[i] > arr[i+1]){
            idx = i ; 
            break; 
        }
    }
    return idx; 
}

int main()
{
    vector<int> arr = {0, 1, 2, 3, 4, 5, 9};

    if (BinarySearch(arr))
    {
        for (int i = 0; i < arr.size(); i++)
        {
            cout << arr[i] << " ";
        }
    }
}