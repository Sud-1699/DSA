// Syntax
/*
class DerivedClass : access-specifier BaseClass1, access-specifier BaseClass2, ...
{
    // class body
};
*/

#include <iostream>

using namespace std;

// Base class 1
class Animal
{
public:
    void eat()
    {
        cout << "I can eat!\n";
    }
};

// Base class 2
class Mammal
{
public:
    void breath()
    {
        cout << "I can breathe!\n";
    }
};

// Derived class inheriting from both Animal and Mammal
class Dog : public Animal, public Mammal
{
public:
    void bark()
    {
        cout << "I can bark! Woof woof!\n";
    }
};

int main()
{
    Dog myDog;

    // Calling members from both base classes
    myDog.eat();
    myDog.breath();
    
    // Calling a member from the derived class
    myDog.bark();

    return 0;
}