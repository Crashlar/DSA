#include <iostream>
#include <string>
#include <vector>
using namespace std;

void displayDiagnostics(const vector<string>& diagnostics) {
    if (diagnostics.empty()) {
        cout << "No diagnostics available.\n";
        return;
    }

    cout << "System Diagnostics:\n";
    for (const string& item : diagnostics) {
        cout << "- " << item << endl;
    }
}


int main() {
    vector<string> systemChecks = {
        "CPU temperature: Normal",
        "RAM usage: 45%",
        "Disk space: 120GB free",
        "Network: Connected"
    };

    // Type 3: Parameters, no return value
    displayDiagnostics(systemChecks);

    return 0;
}
