#include <iostream>

void add(int a, int b) {
    int result = a + b;
    std::cout << "Sum: " << result << "\n";
};

void subtract(int a, int b) {
    int result = a - b;
    std::cout << "Subtraction: " << result << "\n";
};

void multiplication(int a, int b) {
    int result = a * b;
    std::cout << "Multiplication: " << result << "\n";
};

void divide(int a, int b) {
    int result = a / b;
    std::cout << "Division: " << result << "\n";
};

void mods(int a, int b) {
    int result = a % b;
    std::cout << "Mods: " << result << "\n";
};

void postPreIncrement(int a) {
    int x = a;
    int y = ++x;
    int z = x++;

    std::cout << x << " " << y << " " << z << "\n";
};

void postPreDecrement(int a) {
    int x = a;
    int y = --x;
    int z = x--;

    std::cout << x << " " << y << " " << z << "\n";
};

int main() {
    add(6, 7);
    subtract(6, 7);
    multiplication(6, 7);
    divide(6, 7);
    mods(6, 7);
    postPreIncrement(5);
    postPreDecrement(5);

    return 0;
}