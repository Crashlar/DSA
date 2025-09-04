#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n = 1000, m = 1000;
    vector<int> a;
    vector<int> b; // space complexity = O(n *  m )

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            a.push_back(10);
            b.push_back(12);
        }
        // time complexity = O(n * m )
    }
}