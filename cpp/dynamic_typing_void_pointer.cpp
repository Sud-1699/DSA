// void* Pointers
/* 
A void* pointer is a generic pointer that can point to objects of any data type. 
They can be used to store a reference to any type of object without knowing the specific type of the object.
*/

#include <iostream>

using namespace std;

int main() {
    int x = 42;
    float y = 3.14f;
    string z = "Hello, world!";

    void* void_ptr;

    void_ptr = &x;
    cout << "int value: " << *(static_cast<int*>(void_ptr)) << '\n';

    void_ptr = &y;
    cout << "float value: " << *(static_cast<float*>(void_ptr)) << '\n';

    void_ptr = &z;
    cout << "string value: " << *(static_cast<string*>(void_ptr)) << '\n';

    return 0;
}