#include <iostream>

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
};

int main() {
    int num = 10;
    int &refNum = num;

    refNum = 15; // If refNum modified it will effect to num also
    std::cout << "Reference of num: " << refNum << "\n";

    // Function Parameters
    int x = 5, y = 10;
    std::cout << "Before Swap: x = " << x << " y = " << y << '\n'; // Outputs 5 10

    swap(x, y);
    std::cout << "After Swap: x = " << x << " y = " << y << '\n';  // Outputs 10 5

    std::vector<std::string> stooges {"xyz", "abc", "def"};

    // References in Range-based For Loops
    // Read-only, no copies
    for (auto const &str : stooges)
        std::cout << str << std::endl;

    // Makes a copy of each string
    for (auto str : stooges)
        std::cout << str << std::endl;

    // Direct reference, can modify original elements
    for (auto &str : stooges)
        str += "!";

    // Makes a copy of each string, but prevents modification of the copy
    for (const auto str : stooges)
        std::cout << str << std::endl;
    return 0;
}