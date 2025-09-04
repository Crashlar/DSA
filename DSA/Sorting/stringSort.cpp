#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "AZYZXBYDXJK";
    string str = "";
    int n = str.size();
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'X')
        {
            str.push_back(s[i]);
        }
    }
    cout << str;

    // insertion sort
    for (int i = 0; i <= n - 1; i++)
    {
        int j = i;
        while (j >= 1 && str[j] < str[j - 1])
        {
            swap(str[j], str[j - 1]);
            j--;
        }
    }

    cout << endl;
    for (int i = 0; i < str.size(); i++)
    {
        cout << str[i] << " ";
    }
}