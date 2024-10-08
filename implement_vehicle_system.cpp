#include <bits/stdc++.h>
using namespace std;

class vehicle
{
public:
    string make;
    int year;
    float fuel;

    vehicle(string m, int y, float f) : make(m), year(y), fuel(f) {};

    void refuel(float f)
    {
        this->fuel += f;
    }

    void display()
    {
        cout << "The manufacturer of the vehicle : " << this->make << "\nThe year the vehicle was manufactured : " << this->year << "\nThe amount of fuel left in the vehicle : " << this->fuel << endl;
    }
};

class car : public vehicle
{
public:
    int doors;

    car(string m, int y, float f, int d) : vehicle(m, y, f), doors(d) {}

    void display()
    {
        cout << "The manufacturer of the vehicle : " << this->make << "\nThe year the vehicle was manufactured : " << this->year << "\nThe amount of fuel left in the vehicle : " << this->fuel << endl;
    }

    void openDoors()
    {
        cout << "Doors are opened." << endl;
    }
};

class bike : public vehicle
{
public:
    bool carrier;

    bike(string m, int y, float f, bool c) : vehicle(m, y, f), carrier(c) {}

    void display()
    {
        cout << "The manufacturer of the vehicle : " << this->make << "\nThe year the vehicle was manufactured : " << this->year << "\nThe amount of fuel left in the vehicle : " << this->fuel << "\n It has carrier or not: " << this->carrier << endl;
    }

    void KickStart()
    {
        cout << "Bike kick-started." << endl;
    }
};

int main()
{

    car myCar("Toyota", 2020, 15.5, 4);
    bike myBike("Yamaha", 2019, 8.3, true);

    myCar.display();
    cout << endl;
    myCar.refuel(2.124);
    myCar.display();
    cout << endl;
    myCar.openDoors();

    cout << endl;
    myBike.display();
    cout << endl;
    myBike.refuel(2.142);
    myBike.display();
    cout << endl;
    myBike.KickStart();
    cout << endl;
    return 0;
}