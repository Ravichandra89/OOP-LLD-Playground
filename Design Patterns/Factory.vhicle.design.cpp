#include <iostream>
using namespace std;

/*
======= Abstract Product ======
*/

class Vehicle
{
public:
    virtual void drive() = 0;
    virtual ~Vehicle() {}
};

/*
++++++ Concrete Product +++++++
*/

class Car : public Vehicle
{
public:
    void drive() override
    {
        cout << "Driving a Card" << endl;
    }
};

class Bike : public Vehicle
{
public:
    void drive() override
    {
        cout << "Riding a Bike" << endl;
    }
};

class Truck : public Vehicle
{
public:
    void drive() override
    {
        cout << "Driving a Truck" << endl;
    }
};

/*
++++++ VehicleFactory ++++++++
*/

class VehicleFactory
{
public:
    virtual Vehicle *createVehicle() = 0;
    virtual ~VehicleFactory() {}
};

/*
+++++++ Concrete Creator : CarFactory ++++++
*/

class CarFactory : public VehicleFactory
{
public:
    Vehicle *createVehicle() override
    {
        // Creating car object
        return new Car();
    }
};

class BikeFactory : public VehicleFactory
{
public:
    Vehicle *createVehicle() override
    {
        return new Bike();
    }
};

class TruckFactory : public VehicleFactory
{
public:
    Vehicle *createVehicle() override
    {
        return new Truck();
    }
};

int main()
{
    VehicleFactory *fac = nullptr;
    int choice;

    cout << "Welcome to the Vehicle Rental System" << endl;
    cout << "Select the type of vehicle you want to rent:" << endl;
    cout << "1. Car" << endl;
    cout << "2. Bike" << endl;
    cout << "3. Truck" << endl;
    cout << "Enter your choice (1, 2, or 3): ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        fac = new CarFactory();
        break;
    case 2:
        fac = new BikeFactory();
        break;
    case 3:
        fac = new TruckFactory();
        break;
    default:
        cout << "Invalid choice. Exiting" << endl;
        return 1;
    }


    Vehicle * vec = fac->createVehicle();

    vec->drive();

    delete vec;
    delete fac;

    return 0;
}

