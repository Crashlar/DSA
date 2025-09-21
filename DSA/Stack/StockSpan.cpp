#include <iostream>
#include <stack>
using namespace std;

void StockSpan(int arr[], int n)
{
    stack<int> st;
    int pgi[n];
    pgi[0] = 1;
    st.push(0);

    for (int i = 1; i <=n - 1; i++)
    {
        // pop all the elements smaller than arr[i]

        while (st.size() > 0  && arr[st.top()] <= arr[i])
            st.pop();

        // mark the ans in nge array

        if (st.empty()) pgi[i] = - 1;
        else pgi[i] = st.top();
        pgi[i] = i - pgi[i];
        // push the arr[i]
        st.push(i);
    }
    cout << "By visiting stack :" << endl;
    for (int i = 0; i < n; i++)
    {
        
        cout << pgi[i] << " ";
    }

}

int main()
{
    int arr[] = {100, 80, 60, 81,70 ,  60, 75, 85};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Original Data :" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    StockSpan(arr, size);
}