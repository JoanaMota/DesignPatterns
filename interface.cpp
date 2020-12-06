#include <iostream>

using namespace std;

// Base class
class Shape
{
public:
    // pure virtual function providing interface framework.
    virtual int getArea(){};
    void setWidth(int w)
    {
        width = w;
    }

    void setHeight(int h)
    {
        height = h;
    }

protected:
    int width;
    int height;
};

// Derived classes
class Rectangle : public Shape
{
public:
    int getArea()
    {
        std::cout << "Rectangle" << std::endl;
        return (width * height);
    }
};

class Triangle : public Shape
{
public:
    int getArea()
    {
        return (width * height) / 2;
    }
};

int main(void)
{
    Shape *rect1;
    rect1 = new Rectangle();
    Rectangle Rect;
    Triangle Tri;

    Rect.setWidth(5);
    Rect.setHeight(7);

    // Print the area of the object.
    cout << "Total Rectangle area: " << Rect.getArea() << endl;

    Tri.setWidth(5);
    Tri.setHeight(7);

    // Print the area of the object.
    cout << "Total Triangle area: " << Tri.getArea() << endl;

    rect1->setWidth(5);
    rect1->setHeight(7);

    // Print the area of the object.
    cout << "Total rect1 area: " << rect1->getArea() << endl;

    return 0;
}