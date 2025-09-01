#include <iostream>
using namespace std;

int main(){
    // int* ptr = NULL; // reserved addresss
    int* ptr = '\0'; // null character
    // cout << ptr;
    // cout << *ptr;

    char ch = (char)*ptr;
    cout << ch<<endl;
    return 0;
}