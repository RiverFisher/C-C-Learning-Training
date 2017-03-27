#ifndef INFILESTORAGE_CROSSOVER_H
#define INFILESTORAGE_CROSSOVER_H


#include <iostream>
#include "Car.h"

/**
 *  Абстрактный базовый класс возможного класса автомобилей
 */
class Crossover : public Car {
public:
    Crossover() { }
    Crossover(string) { }
    Crossover(string, int) { }

    ~Crossover() { }

//    void info() {
//        cout << getProducer()   << " "
//             << getModel()      << " ("
//             << getClass()      << ") is ready to use."
//             << endl;
//    }

    void switchOnOverdrive();
    void switchOffOverdrive();

    virtual string getProducer() { };
    virtual string getModel() { };

    string getClass() { return "crossover"; }
};


#endif //INFILESTORAGE_CROSSOVER_H
