#ifndef INFILESTORAGE_SUV_H
#define INFILESTORAGE_SUV_H


#include <iostream>
#include "Car.h"

/**
 *  Абстрактный базовый класс возможного класса автомобилей
 */
class SUV : public Car {
public:
    SUV() { }
    SUV(string) { }
    SUV(string, int) { }

    virtual ~SUV() { }

//    void info() {
//        cout << getProducer()   << " "
//             << getModel()      << " ("
//             << getClass()      << ") is ready to use."
//             << endl;
//    }

    void blockBridge();
    void unblockBridge();

    virtual string getProducer() { };
    virtual string getModel() { };

    string getClass() { return "SUV"; }
};


#endif //INFILESTORAGE_SUV_H
