#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter the 3 digits number : ";
    cin >> num;
    // if user gonna mad and put negative number 
    num = abs(num);
    if (num > 99 && num <1000){
        cout << "Right, Three digit number";
    }
    else
    {
        cout << "No";
    }
    
    return 0;
}