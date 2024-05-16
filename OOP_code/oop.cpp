#include <bits/stdc++.h>
using namespace std;

// Base class
class Animal
{
private:
    string name;

public:
    // Constructor
    Animal(string n) : name(n) {}

    // Getter method
    string getName()
    {
        return name;
    }

    // Virtual method for polymorphism
    virtual void makeSound()
    {
        cout << "Some generic animal sound" << endl;
    }
};

// Derived class
class Dog : public Animal
{
public:
    // Constructor
    Dog(string n) : Animal(n) {}

    // Overriding makeSound method
    void makeSound() override
    {
        cout << getName() << " says: Woof!" << endl;
    }
};

// Another derived class
class Cat : public Animal
{
public:
    // Constructor
    Cat(string n) : Animal(n) {}

    // Overriding makeSound method
    void makeSound() override
    {
        cout << getName() << " says: Meow!" << endl;
    }
};

// Main function
int main()
{
    // Creating objects
    Dog dog("Buddy");
    Cat cat("Whiskers");

    // Encapsulation: Accessing private data through public methods
    cout << "Dog's name: " << dog.getName() << endl;
    cout << "Cat's name: " << cat.getName() << endl;

    // Polymorphism: Different behavior of makeSound for Dog and Cat
    Animal *animals[2];
    animals[0] = &dog;
    animals[1] = &cat;

    for (int i = 0; i < 2; ++i)
    {
        animals[i]->makeSound();
    }

    return 0;
}