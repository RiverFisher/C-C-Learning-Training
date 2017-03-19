#ifndef INFILESTORAGE_PAJERO_H
#define INFILESTORAGE_PAJERO_H


#include <iostream>

using namespace std;

/**
 *  Представитель модельного ряда автомобилей Mitsubishi
 */
class Pajero: public SUV {
public:
    void info() {
        cout << "Mitsubishi Pajero is ready to use" << endl;
    }
};


#endif //INFILESTORAGE_PAJERO_H
