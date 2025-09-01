#include <iostream>
using namespace std;

int main(){
    int sample_n = 21 , sum = 0 , reverse_n  = 0 ,lastdigit = 0;
    int original_n = sample_n;
    while(sample_n > 0 ){
        lastdigit = sample_n % 10 ;
        reverse_n *= 10;
        reverse_n += lastdigit;
        sample_n /= 10 ;
    }
    cout << "Reverse of input : "<<reverse_n<< endl ; 
    // add ing both sample and reverse_output 
    sum = original_n + reverse_n; 
    cout << "sum of "<< original_n << " and "<< reverse_n<< " : "<< sum ; 
    return 0;
}
// WAP to print the sum of a given number and its reverse
// Sample Input : 12
// Sample Output : 33 [12+21]
