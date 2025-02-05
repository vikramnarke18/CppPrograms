#include <iostream>
using namespace std;

class A {
public:
    void funA() {
        cout << "I am class A\n";
    }
};

class B : virtual public A {
public:
    void funB() {
        cout << "I am class B\n";
    }
};

class C : virtual public A {
public:
    void funC() {
        cout << "I am class C\n";
    }
};

class D : public B, public C {
public:
    void funD() {
        cout << "I am class D\n";
    }
};

int main() {
    D d; // Proper instantiation of class D
    d.funA(); // Calling funA() from class A
    d.funB(); // Calling funB() from class B
    d.funC(); // Calling funC() from class C
    d.funD(); // Calling funD() from class D
    return 0;
}
