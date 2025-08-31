#include <iostream>
using namespace std;

int main(){

    int num ; 
    cout << "Enter the number : ";
    cin >> num;
    if(num < 0 ){
        num = abs(num);
        cout << num;
    }
    return 0;
}

