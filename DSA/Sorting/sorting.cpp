#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> v(5);
    for( int i = 0 ; i < 5 ; i++){
        // int x ; 
        // cin >> x ; 
        // v.push_back(x);
        cin >> v[i];
    }
    // inbuilt sorting 
    // Time complexity = O(n*logn)
    sort(v.begin() , v.end());
    reverse(v.begin() , v.end());
    
    for( int i = 0 ; i < 5; i++){
        cout << v[i]<< " ";
    }
}