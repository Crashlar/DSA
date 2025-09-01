// Ans - 
//     No, the following program snippet is incorrect and will cause undefined behavior (likely a segmentation fault) at runtime:

// int a = 10, b = 20;
// int *ptr;
// *ptr = 5; // ❌ Dangerous: ptr is uninitialized!

#include <iostream>
using namespace std;

int main(){
    int a = 10, b = 20;
    int *ptr;
    *ptr = 5;
    return 0;
}
