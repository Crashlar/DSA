#include <iostream>
using namespace std;

class Student
{
public:
    const int rollNumber;
    int age;
    Student(int i, int a) : rollNumber(i), age(a) {}
};

int main()
{
    Student s1(100, 23);
    Student s2(111, 23);

    cout << s1.rollNumber << " " << s1.age << endl;
    cout << s2.rollNumber << " " << s2.age << endl;
}