#ifndef INFILESTORAGE_GLADIATOR_H
#define INFILESTORAGE_GLADIATOR_H


#include <iostream>

using namespace std;

/**
 *  Представитель модельного ряда автомобилей Jeep
 */
class Gladiator: public Waggon {
public:
    Gladiator() { }
    ~Gladiator() { }

    string getProducer()    { return "Jeep"; }
    string getModel()       { return "Gladiator"; }
};


#endif //INFILESTORAGE_GLADIATOR_H
