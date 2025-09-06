#include <iostream>
using namespace std;

int numberOfSteps(int num) {
        if ( num == 0 ) return 0  ; 
        if ( num % 2 == 0 ){
            return 1 + numberOfSteps(num /2 );
        }
        else 
            return 1 + numberOfSteps(num-1);
    }

int main(){
    int num = 21 
    ; 
    cout << numberOfSteps(num);    
}

// Given an integer num, return the number of steps to reduce it to zero. In one step, if the current number is even, you have to divide it by 2, otherwise, you have to subtract 1 from it. [Leetcode 1342]

// https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/submissions/1720915058/
