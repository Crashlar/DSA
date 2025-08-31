public class DivisionOfDataTypes {

    public static void main(String[] args) {
        
        // int/int = int
        // if any one is float then output is also float 
        double x = 5 / 2 ; 

        System.out.println((x));
    }
    
    
}

/*

 /*

C++ Program Demonstrating Division of Data Types
================================================

This program demonstrates how division operations work with different data types in C++.
It shows the important concept of type conversion and result determination in arithmetic operations.

Key Features:
- Demonstrates integer division behavior
- Shows how data types affect division results
- Explains type conversion rules in C++

*/

// #include <iostream>  // Include the Input/Output Stream Library for cout
// using namespace std; // Use the standard namespace to avoid std:: prefix

// int main() {         // Main function - entry point of the program
    
//     /* 
//     Division Operation: 5 / 2
//     ========================
//     - Both operands are integers (int/int)
//     - Integer division truncates the decimal part
//     - Result is 2 (not 2.5) because of integer division
//     - Then assigned to double variable x
//     - The truncation happens before assignment
//     */
//     double x = 5 / 2; // Integer division: 5/2 = 2, then converted to double: 2.0

//     /* 
//     Output the Result
//     ================
//     - cout outputs the value stored in x
//     - Since integer division occurred first, output will be 2.0
//     */
//     cout << x << endl; // Output: 2

//     return 0; // Return 0 indicating successful program execution
// }

/*

Program Output:
==============
2

Explanation:
===========
- In C++ (same as Java), when both operands are integers, integer division occurs
- The decimal part is truncated (not rounded)
- The result is then converted to double, but the truncation has already happened
- To get floating-point division, at least one operand must be floating-point:
  Example: double x = 5.0 / 2;  or double x = 5 / 2.0;

Additional Note:
===============
To get the expected 2.5 result, you would need to write:
double x = 5.0 / 2;    // Output: 2.5
or
double x = (double)5 / 2; // Output: 2.5

*/
