#include <iostream>
using namespace std;

class Rectangle
{
public:
    int width;
    int height;
    Rectangle();
    Rectangle(int w, int h);
    Rectangle(int s);
    bool isSquare();
};

Rectangle::Rectangle()
{
    width = 0;
    height = 0;
}

Rectangle::Rectangle(int w, int h)
{
    width = w;
    height = h;
}

Rectangle::Rectangle(int s)
{
    width = s;
    height = s;
}

bool Rectangle::isSquare()
{
    return width == height;
}

int main()
{
    Rectangle rect1;
    Rectangle rect2(3, 5);
    Rectangle rect3(3);

    if (rect1.isSquare()) cout << "rect1 is a square." << endl;
    if (rect2.isSquare()) cout << "rect2 is a square." << endl;
    if (rect3.isSquare()) cout << "rect3 is a square." << endl;
}
