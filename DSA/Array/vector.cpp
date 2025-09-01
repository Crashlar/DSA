#include <iostream>
#include<vector>
using namespace std;

int main(){
    // creating a dynamic array 
    // no need to mention size
    vector <int> v;
    v.push_back(6);
    v.push_back(5);
    // v[2] = 6; // wrong way to inizialize
    // v[3] = 34;
    cout << v.size()<< endl; 
    v.push_back(5);
    cout << v.size()<< endl; 
    
    // cout << v[0] <<endl;
    // cout << v[1] <<endl;
    // cout << v[2] <<endl;
    // cout << v[3] <<endl;
    // cout << v[4] <<endl;


    return 0;
}