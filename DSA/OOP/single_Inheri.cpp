#include <iostream>
using namespace std;

class Base {
public:
    int a;
    void getA() {
        cout << "Enter a: ";
        cin >> a;
    }
};

class Derived : public Base {
private:
    int b;
public:
    void getB() {
        cout << "Enter b: ";
        cin >> b;
    }
    void showProduct() {
        cout << "Product = " << a * b << endl;
    }
};

int main() {
    Derived obj;
    obj.getA();       
    obj.getB();       
    obj.showProduct(); 
    return 0;
}
