#include <iostream>
using namespace std;

int main()
{
    float mark1, mark2, mark3;
    cout << "Enter the mark1 :";
    cin >> mark1;
    cout << "Enter the mark2  :";
    cin >> mark2;
    cout << "Enter the mark3  :";
    cin >> mark3;

    if (mark1 < mark2 && mark1 < mark3)
    {
        cout << "mark1 : " << mark1 << " is minimum";
    }
    else if (mark2 < mark1 && mark2 < mark3)
    {
        cout << "mark2 : " << mark2 << " is minimum";
    }
    else
    {
        cout << "mark3 : " << mark3 << " is minimum";
    }

    return 0;
}
// If the marks of A, B and C are input through the keyboard, write a program to determine the student scoring least marks.