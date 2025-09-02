#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> arr = { 
                                {1,2,3,} ,
                                {4, 5, 6},
                                {7, 8, 9}  
                             };

    for( int i = 0 ; i < arr.size(); i++){
        for( int j = 0 ; j < arr.size(); j++){
            if ( (i == j) || (i + j == 2) ){
                cout << arr[i][j] << " " ;
            }
            else cout << "   ";
        }
        cout << endl ; 
    }
}

// Write a program to print the elements of both the diagonals in a square matrix.

// Input 1:
// 1 2 3
// 4 5 6
// 7 8 9

// Output
// 1   3
//   5
// 7   9