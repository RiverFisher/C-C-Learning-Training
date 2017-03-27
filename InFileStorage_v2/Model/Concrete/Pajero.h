#ifndef INFILESTORAGE_PAJERO_H
#define INFILESTORAGE_PAJERO_H


#include <iostream>

using namespace std;

/**
 *  Представитель модельного ряда автомобилей Mitsubishi
 */
class Pajero: public SUV {
public:
    Pajero() { }
    ~Pajero() { }

    string getProducer()    { return "Mitsubishi"; }
    string getModel()       { return "Pajero"; }
};


#endif //INFILESTORAGE_PAJERO_H
