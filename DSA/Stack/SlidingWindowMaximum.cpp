#include <iostream>
#include <stack>
#include <vector>
#include <climits>
using namespace std;

// bruteForce
vector<int> SlidingWindowMaximum(vector<int> arr, int k)
{
    // No. of window = n - k + 1
    int n = arr.size();

    vector<int> ans;

    for (int i = 0; i < n - k + 1; i++)
    {
        int mx = INT_MIN;

        for (int j = i; j < i + k; j++)
        {
            mx = max(mx, arr[j]);
        }

        ans.push_back(mx);
    }
    return ans;
}

// best case
vector<int> maxSlidingWindow(vector<int> &arr, int k)
{
    int n = arr.size();
    vector<int> ngi(n);
    stack<int> st;

    // Compute NGI for each element
    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && arr[st.top()] <= arr[i])
            st.pop();
        ngi[i] = st.empty() ? n : st.top();
        st.push(i);
    }

    vector<int> ans;
    for (int i = 0; i <= n - k; i++)
    {
        int j = i;
        while (ngi[j] < i + k)
            j = ngi[j];
        ans.push_back(arr[j]);
    }

    return ans;
}

int main()
{

    vector<int> v = {10, 34, 45, 4, 45, 45};

    // vector<int> pt = SlidingWindowMaximum(v , 3);
    // vector<int> pt = (v , 3);

    vector<int> brute = SlidingWindowMaximum(v, 3);
    vector<int> optimized = maxSlidingWindow(v, 3);

    cout << "Brute-force: ";
    for (int x : brute)
        cout << x << " ";
    cout << "\nOptimized: ";
    for (int x : optimized)
        cout << x << " ";
    cout << endl;
}