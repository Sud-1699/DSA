// std::any (C++17)
/* 
C++17 introduced the std::any class which represents a generalized type-safe container for single values of any type.
*/

#include <iostream>
#include <any>

using namespace std;

int main() {
    any any_value;

    any_value = 42;
    cout << "int value: " << any_cast<int>(any_value) << '\n';

    any_value = 3.14;
    cout << "double value: " << any_cast<double>(any_value) << '\n';

    any_value = string("Hello, world!");
    cout << "string value: " << any_cast<string>(any_value) << '\n';

    return 0;
}