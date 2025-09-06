#include <iostream>
using namespace std;

// Base class
class Person {
public:
    string name;
    void setName(string n) {
        name = n;
    }
    void showName() {
        cout << "Name: " << name << endl;
    }
};

// class 1 (Single Inheritance)
class Employee : public Person {
public:
    int empID;
    void setEmpID(int id) {
        empID = id;
    }
    void showEmpID() {
        cout << "Employee ID: " << empID << endl;
    }
};

// class 2 (Single Inheritance)
class Student : public Person {
public:
    int rollNo;
    void setRollNo(int r) {
        rollNo = r;
    }
    void showRollNo() {
        cout << "Roll No: " << rollNo << endl;
    }
};

// class 3 (Multiple Inheritance → Hybrid)
class Intern : public Employee, public Student {
public:
    void showInternDetails() {
        // Ambiguity: Person is inherited twice
        Employee::showName();  
        showEmpID();
        showRollNo();
    }
};

int main() {
    Intern i;
    i.Employee::setName("Dear");  
    i.setEmpID(101);
    i.setRollNo(202);

    i.showInternDetails();
    return 0;
}
