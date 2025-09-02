#include <iostream>
#include<vector>
using namespace std;

vector<vector<int>> transpose(vector<vector<int>> matrix){
        // rows 
    int n  = matrix.size();
    // colm
    int m = matrix[0].size();

    // creating new vector for transpose 
    vector<vector<int>> t(n, vector<int> (m) );

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            t[j][i] = matrix[i][j];
        }
    }

    return t; 

}

int main(){
    
    vector<vector<int>> arr = {{2 , 4 , -1} ,{ -10  , 5 , 11} , {18 , -7 , 6 }};

    vector<vector<int>>transposed = transpose(arr);

    cout << "Transposed Matrix:\n";
    for (const auto & row : transposed) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
}

// 867 leetcode 