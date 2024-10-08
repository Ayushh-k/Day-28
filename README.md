# Day-28
Cpp Practice Questions

ues 1. You are tasked with creating a simple vehicle system in C++ using object-oriented programming principles. Implement a base class Vehicle and two derived classes Car and Bike. Each vehicle can perform certain common actions, but they also have specific attributes and methods.

Requirements:

Base Class: Vehicle
Attributes:
string make: The manufacturer of the vehicle.
int year: The year the vehicle was manufactured.
float fuel: The amount of fuel left in the vehicle.
Methods:
void refuel(float amount): Increases the fuel by amount.
void display(): A virtual method that displays the vehicle's details.
Derived Class: Car (inherits from Vehicle)
Attributes:
int doors: Number of doors in the car.
Methods:
void display(): Override the display() method to show car-specific details, including the number of doors.
void openDoors(): A method that prints "Doors are opened."
Derived Class: Bike (inherits from Vehicle)
Attributes:
bool hasCarrier: Indicates whether the bike has a carrier.
Methods:
void display(): Override the display() method to show bike-specific details, including whether it has a carrier.
void kickStart(): A method that prints "Bike kick-started."
Main Functionality:
Create objects of Car and Bike with relevant attributes.
Refuel both vehicles and display their details.
Call their specific methods (openDoors() for Car and kickStart() for Bike).
