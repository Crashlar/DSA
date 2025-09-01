#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v(5 , 7); // intial size = 5 , each element intialized with 7 
    cout << v.size()<< endl;
    cout << v.capacity();
    return 0;
}