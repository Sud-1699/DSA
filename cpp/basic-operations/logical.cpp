#include <iostream>

void andOperator() {
    int a = 5, b = 10;
    if (a > 0 && b > 0) {
        std::cout << "Both values are positive.\n";
    }
};

void orOperator() {
    int a = 5, b = -10;
    if (a > 0 || b > 0) {
        std::cout << "At least one value is positive.\n";
    }
};

void notOperator() {
    int a = 5;
    if (!(a < 0)) {
        std::cout << "The value is not negative.\n";
    }
};

void example() {
    int a = 5, b = -10, c = 15;

    if (a > 0 && (b > 0 || c > 0)) {
        std::cout << "At least two values are positive.\n";
    }
};

int main () {
    andOperator();
    orOperator();
    notOperator();
    example();

    return 0;
}