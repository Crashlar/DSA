#include <iostream>
using namespace std;

int factorial(int n)
{
    // base case
    if (n == 1 || n == 0)
        return 1;
    // kaam & call
    int ans = n * factorial(n - 1);
    //  return
    return ans;
}

int main()
{
    cout << factorial(5);

    // cout << fact<< endl ;
}