#include <iostream>

// Template function to print any type
template<typename T>
void print(const T& value) {
    std::cout << "Printing value: " << value << "\n";
}

int main() {
    print(7);
    print(3.14);
    print("C++");

    return 0;
}