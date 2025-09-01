#include <iostream>
using namespace std;

int main(){
    int product = 1 ,  arr[4] = { 1 , 2, 3, 4 };
    for (int i = 0; i < 4; i++)
    {
        product *= arr[i];

    }
    cout << "Product of all element : "<< product;    
    return 0;
}

// Calculate the product of all the elements in the given array.

