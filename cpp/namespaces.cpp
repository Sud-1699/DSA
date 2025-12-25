#include <iostream>

// Normal Namespace
namespace animals {
    std::string dog = "Tommy";
    std::string cat = "Lilly";
}

// Nested Namespace
namespace nestedAnimals {
    std::string dog = "Tommy";
    std::string cat = "Lilly";

    namespace sapiens {
        std::string homo = "Homo Sapiens";
    }
}

int main() {
    std::cout << "Dog name: " << animals::dog << "\n";
    std::cout << "Cat name: " << animals::cat << "\n";

    // import namespage single one from animals or entire animals using `using` keyword
    using animals::dog;
    std::cout << "Dog name: " << dog << "\n";

    using namespace animals;
    std::cout << "Dog name: " << dog << "\n";
    std::cout << "Cat name: " << cat << "\n";    

    // Accessing nested namespace
    std::cout << "Dog name: " << nestedAnimals::dog << "\n";
    std::cout << "Cat name: " << nestedAnimals::cat << "\n";
    std::cout << "Type of sapiens name: " << nestedAnimals::sapiens::homo << "\n";

    return 0;

}