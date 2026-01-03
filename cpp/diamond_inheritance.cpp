#include <iostream>

using namespace std;

class Base {
public:
    void print() {
        cout << "Base class\n";
    }
};

class Derived1 : virtual public Base {
public:
    void derived1Print() {
        cout << "Derived1 class\n";
    }
};

class Derived2 : virtual public Base {
public:
    void derived2Print() {
        cout << "Derived2 class\n";
    }
};

class Derived3 : public Derived1, public Derived2 {
public:
    void derived3Print() {
        cout << "Derived3 class\n";
    }
};

int main() {
    Derived3 d3;
    d3.print(); // Now, there is no ambiguity in calling the base class function
    d3.derived1Print();
    d3.derived2Print();
    d3.derived3Print();

    return 0;
}