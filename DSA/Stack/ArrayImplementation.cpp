#include <iostream>
#include <stack>
using namespace std;

class Stack
{
public:
    // user defined
    int arr[5];
    int idx;
    Stack()
    {
        idx = -1;
    }
    // st.push
    void push(int val)
    {
        if (idx == sizeof(arr)/sizeof(arr[0]) -1)
        {
            cout << "Stack is full"<< endl ;
            return;
        }
        idx++;
        arr[idx] = val;
    }
    // st.pop
    void pop()
    {
        if (idx == -1)
        {
            cout << "Stack is empty" << endl;
            return;
        }
        idx--;
    }
    // st.top
    int top()
    {
        if (idx == -1)
        {
            cout << "Stack is empty" << endl;
            return -1;
        }

        return arr[idx];
    }
    // size
    int size()
    {
        return idx + 1;
    }
};

int main()
{
    Stack st;
    st.top();
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(50);

    cout << st.size() << endl;
    st.pop();
    cout << st.size() << endl;

    cout << st.top() << endl;
}