#include <iostream>

int main() {
    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if(age >= 18) {
        std::cout << "You can vote!" << std::endl;
    } else {
        std::cout << "You are not eligible to vote." << std::endl;
    }

    return 0;
}