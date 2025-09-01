#include <iostream>
using namespace std;

void showStartupBanner() {
    string g =  "=============================\n";
    cout << g ; 
    cout << "   SYSTEM INITIALIZATION     \n";
    cout << g ; 
}


int main() {
    // Type 4: No parameters, no return value
    showStartupBanner();

    cout << "System is ready to proceed.\n";

    return 0;
}
