#include <iostream>

// Inheritances
class Animal {
public:
    void sleeping() {
        std::cout << "He is sleeping!" << "\n";
    };

    // Polymorphism
    virtual void makeSound() {
        std::cout << "The animal make sound!" << "\n";
    };
};

// Classes
class Dog : public Animal {
// Encapsulation => Making data properties encapsulate so it should not directly access `private`, `public`, `protected`
private:
    std::string name;
    int age;
public:
    void setName(std::string n) {
        name = n;
    };
    void setAge(int a) {
        age = a;
    };

    void bark() {
        std::cout << name << " barks!" << "\n";
    };

    // Polymorphism Overriding
    void makeSound() override {
        std::cout << "Woof Woof \n";
    };
};

class Cat : public Animal {
public:
    // Polymorphism Overriding
    void makeSound() override {
        std::cout << "Meow Meow \n";
    };
};


int main() {
    Dog myDog;

    myDog.setName("Bobby");
    myDog.setAge(2);

    myDog.bark();
    myDog.sleeping();
    myDog.makeSound();

    Cat myCat;
    myCat.sleeping();
    myCat.makeSound();

    // Polymorphism more example
    Animal *animals[2] = {new Dog, new Cat};
    animals[0]->makeSound();
    animals[1]->makeSound();
    return 0;
}