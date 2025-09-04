#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "dzxyfpqrtbamjk";
    int n = s.size();

    // bubble sort
    for (int i = 0; i < s.size() - 1; i++)
    {

        // traverse
        for (int j = 0; j < s.size() - i - 1; j++)
        {
            if (s[j] > s[j + 1])
            {
                // swap
                swap(s[j], s[j + 1]);
                
            }
        }
    }

    cout << endl;
    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i] << " ";
    }
}

// Given an array of strings arr[] with all strings in lowercase. Sort given strings using Bubble Sort and display the sorted array.