#include <bits/stdc++.h>
using namespace std;

class Person
{
private:
    string name;
    int age;

public:
    void setName(string n)
    {
        name = n;
    }

    void setAge(int a)
    {
        if (a > 0)
        {
            age = a;
        }
        else
        {
            cout << "Age cannot be negative!" << endl;
        }
    }

    string getName()
    {
        return name;
    }

    int getAge()
    {
        return age;
    }

    void displayInfo()
    {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main()
{
    Person person1;
    person1.setName("Alice");
    person1.setAge(25);

    person1.displayInfo();

    return 0;
}
