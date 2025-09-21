#include <iostream>
#include <stack>
using namespace std;

bool isBalanced(string s)
{
    // if length is odd the return false
    if (s.length() % 2 != 0)
    {
        return false;
    }

    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(')
        {
            st.push(s[i]);
        }
        else
        {
            // s[i] = ')'
            // opening hi hoga top else false hai
            if (st.empty())
                return false;
            else
                st.pop();
        }
    }

    if (st.empty())
        return true;
    else
        return false;
}

int main()
{
    string s = "()())()";
    cout << isBalanced(s) << endl;
}