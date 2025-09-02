#include <iostream>
#include<string>
using namespace std;

int main(){
    string s = "abcdef";
    // s.substr(index , length)
    cout << s.substr()<< endl;
    cout << s.substr(2)<< endl;
    cout << s.substr(2, 2);
}