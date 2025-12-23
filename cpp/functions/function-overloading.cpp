#include <iostream>

void print(int i) {
    std::cout << "Printing int: " << i << '\n';
};

void print(double d) {
    std::cout << "Printing double: " << d << '\n';
};

void print(const char* s) {
    std::cout << "Printing string: " << s << '\n';
};

int main() {
    print(5);
    print(3.14);
    print("C++");
    
    return 0;
}