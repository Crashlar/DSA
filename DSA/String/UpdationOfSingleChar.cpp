#include <iostream>
#include<string>
using namespace std;

int main(){
    string str = "Mukesh";
    cout << str<< endl;
    // str[1] = 'o';   // not in java
    
    for( int i = 0 ; str[i] != '\0'; i++){
        if ( i %2 == 0 ){
            str[i] = 'a';
        }
    }
    
    cout << str<< endl ;
    
    
}