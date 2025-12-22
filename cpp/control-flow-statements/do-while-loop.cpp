#include <iostream>

int main() {
    int count = 10;
    int i = 0;
    do
    {
        std::cout << "Iteration: " << i << '\n';
        i++;
    } while(i < count);
    
    return 0;
}