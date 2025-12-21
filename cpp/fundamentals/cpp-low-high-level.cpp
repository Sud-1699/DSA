#include <iostream>
#include <vector>

int main() {
    //Low level programming
    int number = 0;
    int* ptr_number = &number;

    //High level programmign
    std::vector<int> numbers = {1, 2, 3};
    for (const auto &i: numbers) {
        std::cout << i << "\n";
    }
    
    return 0;
}