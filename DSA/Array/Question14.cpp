#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    
    int first = INT16_MIN;
    int second = INT16_MIN;
    int third = INT16_MIN;

    int term ; 
    cout << "How many number want to add :";
    cin >> term; 
    for (int i = 0; i < term; i++)
    {
        int x; 
        cin >> x;
        v.push_back(x);
    }
    

    for (int num : v)
    {
        if (num > first)
        {
            third = second;
            second = first;
            first = num;
        }
        else if (num > second && num != first)
        {
            third = second;
            second = num;
        }
        else if (num > third && num != second && num != first)
        {
            third = num;
        }
    }

    if (third == INT16_MIN)
        cout << "Less than 3 distinct elements in the array.";
    else
        cout << "Top three largest distinct elements are: " << first << ", " << second << ", " << third;


return 0;
}
// WAP to find the largest three elements in the array.