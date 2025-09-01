#include <iostream>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6 ,7,7};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout << "size of array : "<< size << endl ;
    
    
    return 0;
}

// Question - 
    // Size and sizeof operator (How can we use it to find the length of array )