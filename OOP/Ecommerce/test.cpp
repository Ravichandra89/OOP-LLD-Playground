#include <iostream>
using namespace std;

// Base Class
class Shape {
public:
    // Virtual function
    void draw() {
        cout << "Drawing a generic shape." << endl;
    }
};

// Derived Class: Circle
class Circle : public Shape {
public:
    void draw() { // Override the base class function
        cout << "Drawing a circle." << endl;
    }
};

// Derived Class: Rectangle
class Rectangle : public Shape {
public:
    void draw() { // Override the base class function
        cout << "Drawing a rectangle." << endl;
    }
};

// Main function to demonstrate virtual functions
int main() {
    Shape *shape;          // Base class pointer

    Circle circle;
    Rectangle rectangle;

    shape = &circle;       // Point to a Circle object
    shape->draw();         // Calls Circle's draw()

    shape = &rectangle;    // Point to a Rectangle object
    shape->draw();         // Calls Rectangle's draw()

    return 0;
}
