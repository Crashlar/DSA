#include <iostream>
using namespace std;

// class (Parent)
class Person {
public:
    virtual void introduce() {
        cout << "I am a person." << endl;
    }
};

//class (Son)
class Student : public Person {
public:
    void introduce() override {
        cout << "I am a student." << endl;
    }
};

int main() {
    Person* p;
    Student s;

    p = &s;         // Base pointer pointing to derived object
    p->introduce(); // Calls Student's version due to virtual function

    return 0;
}
