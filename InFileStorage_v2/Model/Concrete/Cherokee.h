#ifndef INFILESTORAGE_CHEROKEE_H
#define INFILESTORAGE_CHEROKEE_H


#include <iostream>

using namespace std;

/**
 *  Представитель модельного ряда автомобилей Jeep
 */
class Cherokee: public Crossover {
public:
    Cherokee() { }
    ~Cherokee() { }

    string getProducer()    { return "Jeep"; }
    string getModel()       { return "Cherokee"; }
};


#endif //INFILESTORAGE_CHEROKEE_H
