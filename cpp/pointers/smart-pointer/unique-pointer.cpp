/* One of C++'s main features includes variants of the normal raw C pointers. 
One of these is the unique_ptr, which is a type of smart pointer that claims exclusive ownership over a value. */

#include <memory>
#include <iostream>

int main() {
    std::unique_ptr<int> uptr = std::make_unique<int>(10);
    std::cout << *uptr << std::endl;

    std::unique_ptr<int> uptr2 = uptr; // compile error
    std::unique_ptr<int> uptr2 = std::move(uptr); // transferring ownership
}