#ifndef INFILESTORAGE_WRANGLER_H
#define INFILESTORAGE_WRANGLER_H


#include <iostream>

using namespace std;

/**
 *  Представитель модельного ряда автомобилей Jeep
 */
class Wrangler: public SUV {
public:
    Wrangler() { }
    ~Wrangler() { }

    string getProducer()    { return "Jeep"; }
    string getModel()       { return "Wrangler"; }
};


#endif //INFILESTORAGE_WRANGLER_H
