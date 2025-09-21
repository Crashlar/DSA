#include <iostream>
#include <stack>
#include <vector>
using namespace std;

vector<int> canSeePersonCount(vector<int> &arr)
{
    int n = arr.size();
    // assign vector size as arr and every value is 0
    vector<int> ans(n, 0);
    stack<int> st;
    st.push(arr[n - 1]);
    ans[n - 1] = 0;

    for (int i = n - 2; i >= 0; i--)
    {
        int count = 0;
        // pop with count

        while (!st.empty() && arr[i] > st.top())
        {
            st.pop();
            count++;
        }
        if (!st.empty())
        {
            count++; // can see the next taller or equal person
        }

        ans[i] = count;
        st.push(arr[i]);
    }
    return ans;
}

int main()
{

    vector<int> v = {10, 34, 45, 4, 45, 45};

    vector<int> pt = canSeePersonCount(v);

    for (int i = 0; i < v.size(); i++)
    {
        cout << pt[i] << " ";
    }
    cout << endl;
}


// leetcode 1994