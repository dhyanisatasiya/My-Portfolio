/*Extend the `Vehicle` hierarchy from Question 3 to include a virtual function `displayDetails()`. 
Implement the `displayDetails()` function in each derived class to print information specific to the vehicle. 
Create an array of `Vehicle` pointers, pointing to objects of different vehicles.
Demonstrate polymorphism by calling the `displayDetails()` function for each object.*/
#include <iostream>
#include <string>
using namespace std;
class Vehicle
{
private:
    string model;
    double speed;

public:
    void setDetails(string m, double s)
    {
        model = m;
        speed = s;
    }

    string getModel()
    {
    	return model;
    }

    double getSpeed()
    {
        return speed;
    }

   
    virtual void displayDetails()
    {
        cout << "Model: " << model << endl;
        cout << "Speed: " << speed << " km/h" << endl;
    }

    virtual ~Vehicle() {}
};


class Car : public Vehicle
{
public:
    void displayDetails() override
    {
        cout << "Vehicle Type: Car" << endl;
        cout << "Model: " << getModel() << endl;
        cout << "Speed: " << getSpeed() << " km/h" << endl;
    }
};


class Bike : public Vehicle
{
public:
    void displayDetails() override
    {
        cout << "Vehicle Type: Bike" << endl;
        cout << "Model: " << getModel() << endl;
        cout << "Speed: " << getSpeed() << " km/h" << endl;
    }
};

int main()
{
    Car c;
    Bike b;

    c.setDetails("Toyota", 120);
    b.setDetails("Honda", 80);

   
    Vehicle* vehicles[2];

    vehicles[0] = &c;
    vehicles[1] = &b;

    for (int i = 0; i < 2; i++)
    {
        vehicles[i]->displayDetails();
        cout << endl;
    }

    return 0;
}

