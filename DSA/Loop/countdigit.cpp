#include <iostream>
using namespace std;

int main()
{
    int count = 0;
    int num = 345;
    if (num == 0)
    {
        cout << " Total num of digits : " << 1 << endl;
    }
    while (num > 0)
    {
        num = num / 10;
        count++;
    }

    cout << " Total num of digits : " << count << endl;

    return 0;
}