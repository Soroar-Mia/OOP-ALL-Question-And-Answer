#include <bits/stdc++.h>
using namespace std;

class Rectangle
{
private:
    int length;
    int width;

public:
    Rectangle(int l, int w)
    {
        length = l;
        width = w;
    }

    int area()
    {
        return length * width;
    }
};

int main()
{
    Rectangle rect(5, 4);
    cout << rect.area() << endl;

    return 0;
}
