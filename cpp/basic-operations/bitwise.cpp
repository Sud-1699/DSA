#include <iostream>

int main() {
    int result = 5 & 3; // result will be 1 (0000 0101 & 0000 0011 = 0000 0001)
    std::cout << "Bitwise AND (&) result will be: " << result << "\n";

    int result1 = 5 | 3; // result will be 7 (0000 0101 | 0000 0011 = 0000 0111)
    std::cout << "Bitwise OR (|) result will be: " << result1 << "\n";

    int result2 = 5 ^ 3; // result will be 6 (0000 0101 ^ 0000 0011 = 0000 0110)
    std::cout << "Bitwise XOR (^) result will be: " << result2 << "\n";
    
    int result3 = ~5; // result will be -6 (1111 1010)
    std::cout << "Bitwise NOT (~) result will be: " << result3 << "\n";

    int result4 = 5 << 1; // result will be 10 (0000 0101 << 1 = 0000 1010)
    std::cout << "Bitwise Left Shift (<<) result will be: " << result4 << "\n";

    int result5 = 5 >> 1; // result will be 2 (0000 0101 >> 1 = 0000 0010)
    std::cout << "Bitwise Right Shift (>>) result will be: " << result5 << "\n";

    return 0;
}