#ifndef INFILESTORAGE_CHEROKEE_H
#define INFILESTORAGE_CHEROKEE_H


#include <iostream>

using namespace std;

/**
 *  Представитель модельного ряда автомобилей Jeep
 */
class Cherokee: public Crossover {
public:
    void info() {
        cout << "Jeep Cherokee is ready to use" << endl;
    }
};


#endif //INFILESTORAGE_CHEROKEE_H
