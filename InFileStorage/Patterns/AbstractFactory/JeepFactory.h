#ifndef INFILESTORAGE_JEEPFACTORY_H
#define INFILESTORAGE_JEEPFACTORY_H


#include "CarFactory.h"
#include "../../Model/Concrete/Cherokee.h"
#include "../../Model/Concrete/Wrangler.h"
#include "../../Model/Concrete/Gladiator.h"

/**
 *  Фабрика Jeep для производства автомобилей разных классов
 */
class JeepFactory: public CarFactory {
public:
    Crossover* createCrossover() {
        return new Cherokee;
    }
    SUV* createSUV() {
        return new Wrangler;
    }
    Waggon* createWaggon() {
        return new Gladiator;
    }
};


#endif //INFILESTORAGE_JEEPFACTORY_H
