#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Shape
{
public:
    virtual Shape *clone() const = 0;
    virtual void draw() const = 0;
    virtual ~Shape() {}
};

class Circle : public Shape
{
private:
    int radius;

public:
    Circle(int r) : radius(r) {};

    Shape *clone() const override
    {
        return new Circle(*this); // Create a Copy constructor
    }

    void draw() const override
    {
        cout << "Drawing Circle with radius: " << radius << endl;
    }
};

class Rectangle : public Shape
{
private:
    int width, height;

public:
    Rectangle(int w, int h) : width(w), height(h) {};

    Shape *clone() const override
    {
        return new Rectangle(*this);
    }

    void draw() const override
    {
        cout << "Drawing Rectangle with width: " << width << " and height: " << height << endl;
    }
};

int main()
{
    // Original Objects
    Circle *circle = new Circle(5);
    Rectangle *rectangle = new Rectangle(10, 20);

    // Cloned objects
    Shape *clonseCircle = circle->clone();
    Shape *clonedRectangle = rectangle->clone();

    // Draw cloned objects
    clonseCircle->draw();
    clonedRectangle->draw();

    // Clean up
    delete circle;
    delete rectangle;
    delete clonseCircle;
    delete clonedRectangle;

    return 0;
}