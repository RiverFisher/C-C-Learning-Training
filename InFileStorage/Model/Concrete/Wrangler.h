#ifndef INFILESTORAGE_WRANGLER_H
#define INFILESTORAGE_WRANGLER_H


#include <iostream>

using namespace std;

/**
 *  Представитель модельного ряда автомобилей Jeep
 */
class Wrangler: public SUV {
public:
    void info() {
        cout << "Jeep Wrangler is ready to use" << endl;
    }
};


#endif //INFILESTORAGE_WRANGLER_H
