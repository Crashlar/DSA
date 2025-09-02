#include <iostream>
#include<vector>
using namespace std;

vector<int> waveform(vector<vector<int>> arr , int m , int n ){
    
    for (int j = 0; j < n; j++)
    {
        // even row
        if (j % 2 != 0)
        {
            for (int i = 0; i < m; i++)
            {
                cout << arr[i][j] << " ";
            }
        }
        else
        {
            for (int i = m - 1; i >= 0; i--)
            {
                cout << arr[i][j] << " ";
            }
        }
    }
}

int main(){

    vector<vector<int>> arr = {
                                {1,2,3,} ,
                                {4, 5, 6},
                                {7, 8, 9}  
                              };
int m = arr.size();
int n = arr[0].size();
                            vector<int>calculated = waveform(arr , m , n );

    
}
// Write a program to print the matrix in wave form.
// 1 2 3
// 4 5 6
// 7 8 9

// 7 4 1 2 5 8 9 6 3