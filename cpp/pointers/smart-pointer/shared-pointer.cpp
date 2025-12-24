/* A std::shared_ptr is a smart pointer in C++ that enables shared ownership of a dynamically allocated object. 
It uses a reference count to track how many shared_ptr instances are pointing to the same resource, 
automatically deallocating the memory when the last owner goes out of scope or resets its ownership.  */

#include <memory>
#include <iostream>

int main() {
    // 1. Creation using std::make_shared (recommended for safety and performance)
    std::shared_ptr<int> sptr = std::make_shared<int>(10);
    std::cout << *sptr << std::endl;
    std::cout << "ptr1 use count: " << ptr1.use_count() << std::endl; // Output: 1

    // 2. Shared ownership via copying
    std::shared_ptr<int> sptr2 = sptr; 
    std::cout << "ptr1 use count: " << ptr1.use_count() << std::endl; // Output: 2
    std::cout << "ptr2 use count: " << ptr2.use_count() << std::endl; // Output: 2
}