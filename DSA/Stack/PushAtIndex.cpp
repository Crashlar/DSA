#include <iostream>
#include <stack>
using namespace std;

void print(stack<int> st)
{
    stack<int> temp;
    while (st.size())
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

void PushAtIndex(stack<int> st, int indexPos, int value)
{
    stack<int> temp;

    while (st.size() > indexPos)
    {
        temp.push(st.top());
        st.pop();
    }

    // pushing the value
    st.push(value);

    // again temp to st

    while (!temp.empty())
    {
        st.push(temp.top());
        temp.pop();
    }
    // inserted messgae

    cout << "After inserted a value : ";
    print(st);
}
int main()
{
    stack<int> st;

    st.push(50);
    st.push(40);
    st.push(30);
    st.push(20);
    st.push(10);

    cout << "Print the original stack : ";
    print(st);
    cout << endl;
    PushAtIndex(st, 2, 99);
}