#ifndef INFILESTORAGE_WAGGON_H
#define INFILESTORAGE_WAGGON_H


#include <iostream>
#include "Car.h"

/**
 *  Абстрактный базовый класс возможного класса автомобилей
 */
class Waggon : public Car {
public:
    Waggon() { }
    Waggon(string) { }
    Waggon(string, int) { }

    virtual ~Waggon() { }

//    void info() {
//        cout << getProducer()   << " "
//             << getModel()      << " ("
//             << getClass()      << ") is ready to use."
//             << endl;
//    }

    void submerge();
    void unload();

    virtual string getProducer() { };
    virtual string getModel() { };

    string getClass() { return "waggon"; }
};


#endif //INFILESTORAGE_WAGGON_H
