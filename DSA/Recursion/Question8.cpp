#include <iostream>
using namespace std;

int fun(int n)
{
    if (n <= 1)
        return 1;
    if (n % 2 == 0)
        return fun(n / 2);
    return fun(n / 2) + fun(n / 2 + 1);
}


int main()
{
    int n = 1;
    cout << fun(n);
}

// Predict the output
// int fun(int n) {
//     if (n <= 1) return 1;
//     if (n % 2 == 0) return fun(n / 2);
//         return fun(n / 2) + fun(n / 2 + 1);
// }