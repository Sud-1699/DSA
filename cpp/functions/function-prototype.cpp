#include <iostream>

// Function prototype
int multiply(int a, int b);

int main() {
    int result = multiply(3, 6);
    std::cout << "Multiplication of two number is: " << result << "\n";

    return 0;
}

// Function definition
int multiply(int a, int b) {
    return a * b;
};