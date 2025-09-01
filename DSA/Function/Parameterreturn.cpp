#include <iostream>
#include <vector>
using namespace std;

// Function: Takes a vector of marks and returns the average
double calculateAverage(const vector<int>& marks) {
    if (marks.empty()) {
        cerr << "Error: No marks provided.\n";
        return 0.0;
    }

    int total = 0;
    for (int mark : marks) {
        total += mark;
    }

    return static_cast<double>(total) / marks.size();
}

int main() {
    vector<int> studentMarks = {85, 90, 78, 92, 88};

    double average = calculateAverage(studentMarks);
    cout << "Average Score: " << average << endl;

    return 0;
}
