#include <iostream>
using namespace std;

int main(){
    char ch1 , ch2 ; 
    cout << "Enter the ch1 : ";
    cin >> ch1;
    cout << "Enter the ch2 : ";
    cin >> ch2;

    // using typecast
    int _char =  (int)ch1 -  (int)ch2;

    // // finding difference 
    // int _ch = ch11 - ch22;
    // // using typecast
    // char final_ = (char)_ch;
    
    if (_char >= 32 && _char <= 126) {
        cout << "Character of ASCII difference: " << (char)_char << endl;
    } else {
        cout << "Difference is not a printable ASCII character." << endl;
    }

    return 0;
}


// WAP to find the difference between ASCII of two characters ,take them as input .