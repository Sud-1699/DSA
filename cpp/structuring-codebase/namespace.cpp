#include <iostream>

namespace MyNamespace {
    int aFunction() {
        std::cout << "Simple namespace" << "\n";
    }
}

// To use the function
MyNamespace::aFunction();