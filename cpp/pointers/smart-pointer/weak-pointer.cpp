#include <iostream>
#include <memory>

using namespace std;

int main() {
    shared_ptr<string> sptr = make_shared<string>("Hello, Weak Pointer!");
    weak_ptr<string> wptr(sptr);

    // Access the object by first converting the weak_ptr to a shared_ptr via lock()
    if (auto temp_sp = weak_observer.lock()) {
        std::cout << "Object is alive: " << *temp_sp << std::endl;
    } else {
        std::cout << "Object has been deallocated." << std::endl;
    }

    // Destroy the original shared pointer owner
    shared_owner.reset(); // Object is deleted

    // Try accessing again
    if (auto temp_sp = weak_observer.lock()) {
        std::cout << "Object is alive: " << *temp_sp << std::endl;
    } else {
        std::cout << "Object has been deallocated (as expected)." << std::endl;
    }

    return 0;
}