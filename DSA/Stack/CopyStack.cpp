#include <iostream>
#include <stack>
using namespace std;


// print the copied stack 
void print(stack<int> st)
{
    stack<int> temp;
    while (st.size() > 0)
    {
        cout << st.top() << " ";
        temp.push(st.top());
        st.pop();
    }

    while (temp.size() > 0)
    {
        st.push(temp.top());
        temp.pop();
    }
}

// copying the stack 
void copyStack(stack<int> st)
{
    stack<int> temp;
    stack<int> copy;

    while (!st.empty())
    {
        temp.push(st.top());
        st.pop();
    }

    while (!temp.empty())
    {
        copy.push(temp.top());
        temp.pop();
    }

    print(copy);
}

int main()
{
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    copyStack(st);
}