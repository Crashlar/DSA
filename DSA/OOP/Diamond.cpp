#include <iostream>
using namespace std;

class A {
public:
    void show() {
        cout << "Class A (virtual)\n";
    }
};

class B : virtual public A {
};

// we use virtual inheritance so that B and C share a single instance of A, and D inherits that shared instance
class C : virtual public A {
};

class D : public B, public C {
};

int main() {
    D obj;
    obj.show(); // ✅ No ambiguity now

    return 0;
}















/*
#include <iostream>
using namespace std;

class A {
public:
    void show() {
        cout << "Class A\n";
    }
};

class B : public A {
};

class C : public A {
};

class D : public B, public C {
};

int main() {
    D obj;
    // obj.show(); // ❌ Ambiguity: compiler doesn't know whether to use B::A or C::A

    obj.B::show(); // ✅ Resolving ambiguity manually
    obj.C::show(); // ✅ Accessing second instance of A

    return 0;
}
*/