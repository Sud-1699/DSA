#include <iostream>

int main() {
    int x = 10;
    int y = 20;

    // Constant Pointer
    int const *constPtr = &x;

    *constPtr = 15; // Allowed
    constPtr = &y; // Not Allowed
    
    // Pointer to Constant
    const int *ptrToConst = &x;

    *ptrToConst = 15; // Not Allowed
    ptrToConst = &y; // Allowed

    // Constant Pointer to Constant
    const int const *constPrtToConst = &x;

    *constPrtToConst = 15; // Not Allowed
    constPrtToConst = &y; // Not Allowed
}