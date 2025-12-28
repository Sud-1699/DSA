#include <iostream>

template <typename T>
T max(T a, T b) {
    return (a > b) ? a : b;
};

int main() {
    int result = max<int>(5, 10);
    std::cout << "Max is: " << result << "\n";

    return 0;
}