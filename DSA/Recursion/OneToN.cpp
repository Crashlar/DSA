#include <iostream>
using namespace std;

void OnePara(int n)
{
    if (n == 0)
        return;

    OnePara(n - 1); 
    cout << n << endl;
}

void OneToN(int i, int n)
{
    if (i > n)
        return;
    cout << i << endl;
    OneToN(i + 1, n);
}

int main()
{
    int n = 20;
    // OneToN(1, n);
    OnePara(n);
}




