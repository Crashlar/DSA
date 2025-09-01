#include <iostream>
using namespace std;

int main(){
    int sample_n = 4556 ,LastDigit ,  sum = 0 ;

    while (sample_n > 0 ){
    // excrat the last digit 
        LastDigit= sample_n % 10;
        // if even then add  
        if ( LastDigit % 2 == 0 ) sum += LastDigit;
        sample_n /= 10;
    }

    cout << "Sum of even number : "<< sum<< endl;
    return 0;
}

// WAP to print the sum of all the even digits of a given number.
// Sample Input : 4556
// Output: 10