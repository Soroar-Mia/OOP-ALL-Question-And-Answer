#include <bits/stdc++.h>
using namespace std;
class Animal
{
public:

    virtual void makeSound() const = 0;

    void sleep() const
    {
        cout << "Sleeping..." << endl;
    }

    virtual ~Animal() {} 
};

class Dog : public Animal
{
public:
    void makeSound() const override
    {
        cout << "Woof! Woof!" << endl;
    }
};

// Concrete class - Cat
class Cat : public Animal
{
public:
    void makeSound() const override
    {
        cout << "Meow! Meow!" << endl;
    }
};

int main()
{
    Animal *myDog = new Dog();
    Animal *myCat = new Cat();
    myDog->makeSound(); 
    myCat->makeSound(); 
    myDog->sleep(); 
    myCat->sleep();
    delete myDog;
    delete myCat;

    return 0;
}
