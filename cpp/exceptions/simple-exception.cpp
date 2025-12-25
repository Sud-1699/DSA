#include <iostream>

int divide(int &a, int &b) {
    if(b == 0) {
        throw "Cannot be divide by zero";
    }

    return a / b;
};

int main() {
    int num1;
    int num2;

    std::cout << "Enter the two numbers: ";
    std::cin >> num1 >> num2;

    try {
        int result = divide(num1, num2);
        std::cout << "Result: " << result << "\n";
    } catch(const char *msg) {
        std::cerr << "Error: " << msg << "\n";
    }
    
    return 0;
}