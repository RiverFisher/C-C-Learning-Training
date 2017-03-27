#include <iostream>
#include "Car.h"

//using namespace std;

Car::Car() { }

Car::Car(string defaultColor)
        : color(defaultColor) { }

Car::Car(string defaultColor, int defaultNumberOfDoors)
        : color(defaultColor), numberOfDoors(defaultNumberOfDoors) { }

virtual Car::~Car() { }

int     Car::getLength()                            { return this->length; }
int     Car::getWidth()                             { return this->width; }
int     Car::getHeight()                            { return this->height; }
int     Car::getClearance()                         { return this->clearance; }
string  Car::getTransmission()                      { return this->transmission; }
Drive   Car::getDrive()                             { return this->drive; }
string  Car::getColor()                             { return this->color; }
int     Car::getNumberOfDoors()                     { return this->numberOfDoors; }

void    Car::setLength(int length)                  { this->length = length; }
void    Car::setWidth(int width)                    { this->width = width; }
void    Car::setHeight(int height)                  { this->height = height; }
void    Car::setClearance(int clearance)            { this->clearance = clearance; }
void    Car::setTransmission(string transmission)   { this->transmission = transmission; }
void    Car::setDrive(Drive drive)                  { this->drive = drive; }
void    Car::setColor(string color)                 { this->color = color; }
void    Car::setNumberOfDoors(int numberOfDoors)    { this->numberOfDoors = numberOfDoors; }