#ifndef INFILESTORAGE_OUTLANDER_H
#define INFILESTORAGE_OUTLANDER_H


#include <iostream>

using namespace std;

/**
 *  Представитель модельного ряда автомобилей Mitsubishi
 */
class Outlander: public Crossover {
public:
    Outlander() { }
    ~Outlander() { }

    string getProducer()    { return "Mitsubishi"; }
    string getModel()       { return "Outlander"; }
};


#endif //INFILESTORAGE_OUTLANDER_H
