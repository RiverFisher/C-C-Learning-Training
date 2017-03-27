#ifndef INFILESTORAGE_CAR_H
#define INFILESTORAGE_CAR_H


#include <iostream>
#include <string>

using namespace std;

enum Drive { FrontWheel, Rear, FourWheel };

class Car {
public:
    Car() { }               // по умолчанию
    Car(string) { }         // назначает цвет
    Car(string, int) { }    // назначает цвет и количество дверей

    virtual ~Car() { }

    void info() {
        cout << getProducer()   << " "
             << getModel()      << " ("
             << getClass()      << ") is ready to use."
             << endl;
    }

    int getLength();
    int getWidth();
    int getHeight();
    int getClearance();
    int getTransmission();
    Drive getDrive();
    int getColor();
    int getNumberOfDoors();

    void setLength(int);
    void setWidth(int);
    void setHeight(int);
    void setClearance(int);
    void setTransmission(string);
    void setDrive(Drive);
    void setColor(string);
    void setNumberOfDoors(int);

    virtual string getProducer() { };
    virtual string getModel() { };

    virtual string getClass() { };

private:
    int length;
    int width;
    int height;
    int clearance;
    string transmission;

    string color;

protected:
    int numberOfDoors;
    Drive drive;
};


#endif //INFILESTORAGE_CAR_H
