#ifndef INFILESTORAGE_MITSUBISHIFACTORY_H
#define INFILESTORAGE_MITSUBISHIFACTORY_H


#include "CarFactory.h"
#include "../../Model/Concrete/Outlander.h"
#include "../../Model/Concrete/Pajero.h"
#include "../../Model/Concrete/Triton.h"

/**
 *  Фабрика Mitsubishi для производства автомобилей разных классов
 */
class MitsubishiFactory: public CarFactory {
public:
    Crossover* createCrossover() {
        return new Outlander;
    }
    SUV* createSUV() {
        return new Pajero;
    }
    Waggon* createWaggon() {
        return new Triton;
    }
};


#endif //INFILESTORAGE_MITSUBISHIFACTORY_H
