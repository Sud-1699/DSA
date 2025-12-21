#include <iostream>

class HelloWorld {
    public:
    void callHelloWorld() {
        std::cout << "Hello World it C++ here. Let's dive into the C++" << "\n";
    }
};

int main() {
    HelloWorld helloWorld;
    helloWorld.callHelloWorld();

    return 0;
}