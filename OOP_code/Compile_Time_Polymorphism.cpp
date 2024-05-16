#include <iostream>

class Print
{
public:
    // Overloaded function
    void display(int i)
    {
        std::cout << "Integer: " << i << std::endl;
    }

    void display(double f)
    {
        std::cout << "Double: " << f << std::endl;   
    }

    void display(const char *c)
    {
        std::cout << "String: " << c << std::endl;
    }
};

int main()
{
    Print print;
    print.display(5);      
    print.display(3.14);   
    print.display("Hello"); 

    return 0;
}
