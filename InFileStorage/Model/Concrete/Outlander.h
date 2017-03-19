#ifndef INFILESTORAGE_OUTLANDER_H
#define INFILESTORAGE_OUTLANDER_H


#include <iostream>

using namespace std;

/**
 *  Представитель модельного ряда автомобилей Mitsubishi
 */
class Outlander: public Crossover {
public:
    void info() {
        cout << "Mitsubishi Outlander is ready to use" << endl;
    }
};


#endif //INFILESTORAGE_OUTLANDER_H
