#include <iostream>
#include <vector>
#include<string>
using namespace std;

void ReverseString(string str , int n ){
    
    for (int i = 0; i < n; i++) {
        if (i < n / 2) {
            // Print the first half as is
            cout << str[i];
        } else {
            // Print the second half in reverse order
            cout << str[n - (i - n / 2) - 1];
        }
    }
    cout << endl;

    // cout << "String : "<< str;
}

int main(){
    
    string str;
    cout << "Taking input : ";
    getline(cin , str);

    // length 
    int n = str.length();

    ReverseString(str , n );

}
// Input a string of even length and reverse the second half of the string.
// Input : str = "abcdefgh"
// Output : abcdhgfe

// Input : str = "pwians"
// Output : pwisna