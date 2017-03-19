#ifndef INFILESTORAGE_CARFACTORY_H
#define INFILESTORAGE_CARFACTORY_H


/**
 *  Абстрактная фабрика для производства автомобилей разных классов
 */
class CarFactory {
public:
    virtual Crossover* createCrossover() = 0;
    virtual SUV* createSUV() = 0;
    virtual Waggon* createWaggon() = 0;
    virtual ~CarFactory() {}
};


#endif //INFILESTORAGE_CARFACTORY_H
