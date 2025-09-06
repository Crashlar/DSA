#include <iostream>
using namespace std;

class Student
{
public:
// must have to declare the value of const if the instialization is not mention 
// also constructor is not in the class so occurs error 
    const int rollNumber;
    int age;
    
};

int main()
{
    Student s1;
    Student s2 = s1;

    s1.rollNumber = 101;
    s1.age = 20;

    cout << s1.rollNumber << " " << s1.age << endl;
    cout << s2.rollNumber << " " << s2.age << endl;
}


