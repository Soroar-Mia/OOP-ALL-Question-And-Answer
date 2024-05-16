#include <bits/stdc++.h>
using namespace std;

class Animal
{
public:
    void eat()
    {
        cout << "Eating" << endl;
    }
};

class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Barking" << endl;
    }
};

int main()
{
    Dog dog1;
    dog1.eat();
    dog1.bark();

    return 0;
}
