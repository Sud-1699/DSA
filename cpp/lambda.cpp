#include <iostream>
using namespace std;

// Syntax
/* 
[capture-list](parameters) -> return_type {
    // function only
} 
*/

// Lambda function with no capture, parameters, or return type.
auto printHello = []() {
    cout << "Hello !" << '\n';
};

// Lambda function with parameters.
auto add = [](int a, int b) {
    return a + b;
};

// Lambda function with capture-by-value.
int multiplier = 3;
auto times = [multiplier](int a) {
    return a * multiplier;
};

// Lambda function with capture-by-reference.
int expiresInDays = 45;
auto updateDays = [&expiresInDays](int newDays) {
    expiresInDays = newDays;
};

int main() {
    printHello();
    return 0;
}