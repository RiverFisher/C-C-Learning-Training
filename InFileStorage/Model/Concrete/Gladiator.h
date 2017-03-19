#ifndef INFILESTORAGE_GLADIATOR_H
#define INFILESTORAGE_GLADIATOR_H


#include <iostream>

using namespace std;

/**
 *  Представитель модельного ряда автомобилей Jeep
 */
class Gladiator: public Waggon {
public:
    void info() {
        cout << "Jeep Gladiator is ready to use" << endl;
    }
};


#endif //INFILESTORAGE_GLADIATOR_H
