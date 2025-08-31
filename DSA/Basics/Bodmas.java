public class Bodmas {

    public static void main(String[] args) {
        
        // rule of the bodmas  from left to right 
        int x = 4 * 2 / 3;
        System.out.println(x);
        int y  = 3 * 5  / 5 * 4;
        // ------> left to right
        System.out.println(y);
    }
    
}



 /*

C++ Program Demonstrating BODMAS Rules
=======================================

This program demonstrates the order of operations (BODMAS/BIDMAS rules)
in C++ programming language. It shows how mathematical expressions
are evaluated from left to right when operators have the same precedence.

Key Features:
- Shows integer arithmetic operations
- Demonstrates left-to-right evaluation
- Uses standard C++ input/output

*/

// #include <iostream>  // Include the Input/Output Stream Library
// using namespace std; // Use the standard namespace

// int main() {         // Main function - entry point of the program
    
//     /* 
//     First Calculation: 4 * 2 / 3
//     ============================
//     Steps:
//     1. Multiplication has same precedence as division
//     2. Evaluation goes from left to right
//     3. 4 * 2 = 8
//     4. 8 / 3 = 2 (integer division truncates decimal part)
//     */
//     int x = 4 * 2 / 3;
//     cout << x << endl; // Output: 2
    
//     /* 
//     Second Calculation: 3 * 5 / 5 * 4
//     ==================================
//     Steps:
//     1. All operators (* and /) have same precedence
//     2. Evaluation goes strictly left to right
//     3. 3 * 5 = 15
//     4. 15 / 5 = 3
//     5. 3 * 4 = 12
//     */
//     int y = 3 * 5 / 5 * 4;
//     cout << y << endl; // Output: 12
    
//     return 0; // Return 0 indicating successful program execution
// }

/*

Program Output:
==============
2
12

Explanation:
===========
- Both calculations demonstrate that when operators have equal precedence,
  C++ evaluates expressions from left to right
- Integer division truncates the decimal part (no rounding)
- The results are identical to Java's behavior for the same expressions

*/