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

void PushAtBottom(stack<int> &st, int val)
{
    stack<int> temp;
    while (st.size() > 0)
    {
        temp.push(st.top());
        st.pop();
    }

    st.push(val);

    while (temp.size() > 0)
    {
        st.push(temp.top());
        temp.pop();
    }
}
int main()
{
    stack<int> st;

    st.push(50);
    st.push(40);
    st.push(30);
    st.push(20);
    st.push(10);

    stack<int> temp;

    cout << "Printing the original Stack" << endl;

    print(st);

    PushAtBottom(st, 111);
    cout << endl
         << "Printing the refiened Stack" << endl;
    print(st);
}