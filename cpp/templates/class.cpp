#include <iostream>

template <typename T1, typename T2>
class Pair {
public:
    T1 first;
    T2 second;

    Pair(T1 first, T2 second): first(first), second(second) {};
};

int main() {
    Pair<int, std::string> pair(10, "Hello");

    return 0;
}