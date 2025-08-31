#include <iostream>
using namespace std;

int main(){
    float a  = 3.4 , b = 5.6 , c = 2.4;
    // or take user input as ur wish 

    if (a > b ){
        if (a > c){
            cout << "a is largest";
        }
        else{
            cout << "c is greatest";
        }
    }
    else{
        cout << "b is greatest";
    }
    
    return 0;
}