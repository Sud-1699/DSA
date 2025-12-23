#include <iostream>

// Structure (struct)
struct PersonStruct
{
    std::string name;
    int age;
    double height;
};

// Classes (class)
class PersonClass {
public:
    std::string name;
    int age;
    double height;

    void printInfo() {
        std::cout << "Name: " << name << ", Age: " << age << ", Height: " << height << "\n";
    };
};

// Union (union)
union PersonUnion{
    std::string name;
    int age;
    double height;
};


int main() {
    //Structure
    PersonStruct ps;
    ps.name = "abc";
    ps.age = 27;
    ps.height = 5.65;

    //Classes
    PersonClass pc;
    pc.name = "abc";
    pc.age = 27;
    pc.height = 5.65;

    pc.printInfo();

    //Union
    PersonUnion pu;
    pu.name = "abc";
    pu.age = 27;
    pu.height = 5.65;

    return 0;
}