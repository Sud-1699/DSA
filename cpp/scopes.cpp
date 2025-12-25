#include <iostream>
// Global Scope
int globalVar = 10;

// Local Scope
void localScopeExample() {
    int localVar = 14;
    std::cout << "Local variable: " << localVar << '\n'; 
};

// Namespace Scope
namespace MyNamespace{
  int namespaceVar = 23;  
};

//Class Scope
class MyClass { 
public: 
    static int staticMember; 
    int nonStaticMember;
    MyClass(int value) : nonStaticMember(value) {}
};


int main() {
    std::cout << "Global variable: " << globalVar << '\n';
    localScopeExample(); // Note: localVar is not accessible here
    std::cout << "Namespace variable: " << MyNamespace::namespaceVar << '\n';

    MyClass obj(10);
    std::cout << "Static member: " << MyClass::staticMember << '\n';
    std::cout << "Non-static member: " << obj.nonStaticMember << '\n'; 
}