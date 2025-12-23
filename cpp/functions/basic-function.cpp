#include <iostream>

int add(int a, int b) {
    return a + b;
};

int main() {
    int result = add(10, 55);
    std::cout << "Addition of two number is: " << result << "\n";

    return 0;
}