#include <iostream>
using namespace std;

int main(){
    int n = 1000;
    int a[n][n/2]; // space complexity = O(n^2)

    for( int i = 1 ; i < n ; i++){
        for( int j = 0 ; j < n / 2 ; j++){
            a[i][j]++;
        }
        // time complexity = O(n*logn)
    }
}