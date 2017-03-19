#ifndef INFILESTORAGE_TRITON_H
#define INFILESTORAGE_TRITON_H


#include <iostream>

using namespace std;

/**
 *  Представитель модельного ряда автомобилей Mitsubishi
 */
class Triton: public Waggon {
public:
    void info() {
        cout << "Mitsubishi Triton is ready to use" << endl;
    }
};


#endif //INFILESTORAGE_TRITON_H
