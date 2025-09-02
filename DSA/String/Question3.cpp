#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool CheckPalindrome(string str, int n)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != str[n - i - 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string str;
    cout << "Enter the string : ";
    getline(cin, str);

    // lenght
    int length = str.length();
    bool checked = CheckPalindrome(str, length);
    if (checked)
    {
        cout << "Palindrome is Possible";
    }
    else{
        cout << "Not a Palindrome ";
    }
}
// Check whether the given string is palindrome or not.
// Input : "abcde"
// Output : No

// Input : "abcdcba"
// Output : Yes