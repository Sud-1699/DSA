/* The goto statement allows you to jump directly to another part of your code. 
Although it works, it is not recommended because it makes programs harder to understand and maintain. */

#include <iostream>

int main() {
    int x = 5;

    if (x == 5)
        goto label;

    std::cout << "This line will be skipped." << std::endl;

label:
    std::cout << "Jumped to label!" << std::endl;

    return 0;
}