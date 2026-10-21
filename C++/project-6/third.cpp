/*Define a base class `Vehicle` with private attributes `model` and `speed`. 
Implement public member functions for setting and getting these attributes. 
Derive two classes, `Car` and `Bike`, from the `Vehicle` class. 
Implement methods to calculate the time taken for a certain distance based on the speed of each vehicle. 
Demonstrate abstraction by calling the time calculation methods for both `Car` and `Bike`.*/

#include <iostream>
using namespace std;

class Vehicle {
private:
    string model;
    float speed;

public:
    void setData(string m, float s) {
        model = m;
        speed = s;
    }

    string getModel() {
        return model;
    }

    float getSpeed() {
        return speed;
    }

    virtual void calculateTime(float distance) = 0;
};

class Car : public Vehicle {
public:
    void calculateTime(float distance) override {
        cout << "Car time: "<< distance / getSpeed() << " hours" << endl;
    }
};

class Bike : public Vehicle {
public:
    void calculateTime(float distance) override {
        cout << "Bike time: "<< distance / getSpeed() << " hours" << endl;
    }
};

int main() {
    Car c;
    Bike b;

    c.setData("Toyota", 60);
    b.setData("Honda", 40);

    cout << "Car Model: " << c.getModel() << endl;
    cout << "Car Speed: " << c.getSpeed() << " km/h" << endl;
    c.calculateTime(120);

    cout << endl;

    cout << "Bike Model: " << b.getModel() << endl;
    cout << "Bike Speed: " << b.getSpeed() << " km/h" << endl;
    b.calculateTime(120);

    return 0;
}

