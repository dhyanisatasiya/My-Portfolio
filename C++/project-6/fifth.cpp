/*Define an abstract class `Shape` with pure virtual functions `calculateArea()` and `draw()`. 
Implement concrete/normal classes `Circle` and `Rectangle` that inherit from `Shape`. 
Demonstrate polymorphism by creating an array of `Shape` pointers pointing to objects of both `Circle` and `Rectangle`. 
Call the `calculateArea()` and `draw()` functions for each object.*/

#include <iostream>
using namespace std;


class Shape
{
public:
    virtual double calculateArea() = 0;
    virtual void draw() = 0;

    virtual ~Shape() {}
};


class Circle : public Shape
{
private:
    double radius;

public:
    Circle(double r)
    {
        radius = r;
    }

    double calculateArea() override
    {
        return 3.14 * radius * radius;
    }

    void draw() override
    {
        cout << "Drawing a Circle" << endl;
    }
};


class Rectangle : public Shape
{
private:
    double length, width;

public:
    Rectangle(double l, double w)
    {
        length = l;
        width = w;
    }

    double calculateArea() override
    {
        return length * width;
    }

    void draw() override
    {
        cout << "Drawing a Rectangle" << endl;
    }
};

int main()
{
    Circle c(5);
    Rectangle r(10, 4);

    Shape* shapes[2];

    shapes[0] = &c;
    shapes[1] = &r;

  
    for (int i = 0; i < 2; i++)
    {
        shapes[i]->draw();

        cout << "Area: "
             << shapes[i]->calculateArea()
             << endl;

        cout << endl;
    }

    return 0;
}

