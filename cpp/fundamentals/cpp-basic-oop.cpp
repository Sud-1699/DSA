#include <iostream>

// Simple function to add two numbers
int add(int a, int b) {
    return a + b;
}

// Simple class
class Calculator {
    public:
    // A member function of class to multiply two numbers
    int multiply(int a, int b) {
        return a * b;
    }
};

int main() {
    int x = 8;
    int y = 6;

    // Using the standalone function 'add'
    int sum = add(x, y);
    std::cout << "Sum: " << sum << "\n";

    // Using a class and member function
    Calculator calc;
    int product = calc.multiply(x, y);
    std::cout << "Product: " << product << "\n";

    return 0;
}