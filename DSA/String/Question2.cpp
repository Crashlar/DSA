#include <iostream>
#include <vector>
#include<string>
using namespace std;

int main(){
    string str ;
    cout << "Enter the string : ";
    getline(cin , str);
    int count = 0 ;  

    for ( int i = 0 ; str[i] != '\0';i++){
        count++;
    }

    // not adding the null character 
    cout << "The string length : "<< count  - 1 ; 
}
// Input a string of length n and count all the consonants in the given string.
// Input : "pwians"
// Output : 4

// Input : "abdc"
// Output : 3