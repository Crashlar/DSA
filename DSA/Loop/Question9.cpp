#include <iostream>
using namespace std;

int main() {
    // Loop through numbers from 1 to 500
    for (int num = 1; num <= 500; num++) {
        int original = num;
        int sum = 0;
        int digit;

        // Extract and cube each digit
        while (original > 0) {
            digit = original % 10;           
            sum += digit * digit * digit;    
            original /= 10;                  
        }

        // Check if sum of cubes equals original number
        if (sum == num) {
            cout << num << endl;  // Armstrong number found
        }
    }

    return 0;
}


// Write a program to print out all Armstrong numbers between 1 and 500. If the sum of cubes of each digit of the number is equal to the number itself, then the number is called an Armstrong number. For example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5 * 5 ) + ( 3 * 3 * 3 )

// Output :
// 1
// 153
// 370
// 371
// 407