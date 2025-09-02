#include <iostream>
using namespace std;

int main(){
    // char str[] = { '1','1'};

    // for (int i = 0; i <2; i++)
    // {
    //     cout << str[i]<< " ";
    // }
    char str[5] = "abcd";
    for( int i = 0 ; str[i] != '\0'; i++){
        cout << str[i]<< " ";
    }

    cout << endl;
    cout << str;
}