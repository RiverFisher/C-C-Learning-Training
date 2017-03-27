#ifndef INFILESTORAGE_TRITON_H
#define INFILESTORAGE_TRITON_H


#include <iostream>

using namespace std;

/**
 *  Представитель модельного ряда автомобилей Mitsubishi
 */
class Triton: public Waggon {
public:
    Triton() { }
    ~Triton() { }

    string getProducer()    { return "Mitsubishi"; }
    string getModel()       { return "Triton"; }
};


#endif //INFILESTORAGE_TRITON_H
