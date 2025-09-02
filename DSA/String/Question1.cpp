#include <iostream>
#include <vector>
#include<string>
using namespace std;

int main(){
    string str ;
    // taking input 
    cout << "Enter the string : ";
    getline(cin , str);
    // printing the string 
    for(int i = 0 ; str[i] != '\0' ;i++){
        if ( i % 2 != 0 ){
            cout << "#";
        }
        else{
            cout << str[i];
        }
    }
}
// Question -
    // Input : str = "Pbwcshkuiglhlds"
    // Output : "P#w#s#k#i#l#l#s"

    // Input : str = "a"
    // Output : "a"