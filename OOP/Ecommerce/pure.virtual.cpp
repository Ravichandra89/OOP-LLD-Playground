#include <iostream>
using namespace std;

class shape
{
public:
    virtual void calculateArea() = 0;
    virtual ~shape() {};
};

class Circle : public shape
{
private:
    double radius;

public:
    Circle(double radius)
    {
        this->radius = radius;
    }

    void calculateArea() override
    {
        cout << "Area of Circle: " << 3.14 * radius * radius << endl;
    }
};

class Rectangle : public shape
{
private:
    double length, width;

public:
    Rectangle(double length, double width)
    {
        this->length = length;
        this->width = width;
    }

    void calculateArea()
    {
        cout << "Area of Rectangle: " << length * width << endl;
    }
};

class Triangle : public shape
{
private:
    double base, height;

public:
    Triangle(double base, double height)
    {
        this->base = base;
        this->height = height;
    }

    void calculateArea()
    {
        cout << "Area of Triangle :" << 0.5 * base * height << endl;
    }
};

int main() {
    shape *ptr;
    
    Circle c1(4.4);
    Rectangle r1(4.4, 5.5);
    Triangle t1(4.4, 5.5);

    ptr = &c1;
    ptr->calculateArea();

    ptr = &r1;
    ptr->calculateArea();

    ptr = &t1;
    ptr->calculateArea();

    return 0;
}