#include <iostream>
using namespace std;

int main() {
    const int students = 4;
    const int fields = 2; // 0: roll number, 1: marks
    int arr[students][fields]; 

    // Input
    cout << "Enter roll number and marks for 4 students:\n";
    for (int i = 0; i < students; i++) {
        for (int j = 0; j < fields; j++) {
            cin >> arr[i][j];
        }
    }

    // Output
    cout << "\nStudent Data:\n";
    for (int i = 0; i < students; i++) {
        cout << "Roll No: " << arr[i][0] << ", Marks: " << arr[i][1] << endl;
    }

    return 0;
}
