#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n = 1000 , m = 1000;
    vector<int> a(n);
    vector<int> b(m); // space complexity = O(n +  m )

    for( int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            a[i]++ , b[i++];
        }
        // time complexity = O(n * m )
    }

}