#include <iostream>

int main() {
    int num = 10;
    int *ptrNum = &num;

    std::cout << "Num address: " << ptrNum << "\n";
    std::cout << "Num value: " << *ptrNum << "\n";
    std::cout << "Pointer address: " << &ptrNum << "\n";

    int nums[5] = {1, 2, 3, 4, 5}; // When you initialize an array nums it return address
    int *prtNums = nums; // That why it doesn't use amphesize to allocate address
    
    std::cout << "Numbers Array address: " << nums << "\n";
    std::cout << "Pointer Numbers Array address: " << prtNums << "\n";
    std::cout << "Pointer Numbers Array value: " << *prtNums << "\n";

    return 0;
}