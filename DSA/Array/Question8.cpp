// Ans - balance[0] (single value) passed to function that not allow check more on wiki 
#include <iostream>
#include <vector>
using namespace std;

double getAverage(int arr[] , int size){
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum / size;
}

int main(){
    int balance[5] = {1000, 2, 3, 17, 50};
    double avg;
    avg = getAverage( balance, 5 ) ;
    cout << "Average value is: " << avg << endl;
    return 0;
    return 0;
}



// Find the error.
// double getAverage(int arr[], int size);

// int main () {
//     int balance[5] = {1000, 2, 3, 17, 50};
//     double avg;
//     avg = getAverage( balance[0], 5 ) ;
//     cout << "Average value is: " << avg << endl;
//     return 0;
// }