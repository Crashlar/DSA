#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cout << "Enter number: ";
    getline(cin, str);

    int result = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            result = result * 10 + (str[i] - '0');
        } else {
            cout << "Invalid input! Not a number." << endl;
            return 1;
        }
    }

    cout << "Output: " << result << endl;
    return 0;
}
/*
Input a string of length less than 10 and convert it into integer without using builtin function.

Input : "3244"
Output : 3244

Input : "12"
Output : 12
*/