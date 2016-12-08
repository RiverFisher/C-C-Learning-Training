#ifndef OOP_CHECK_H
#define OOP_CHECK_H

#include "Buy.h"
#include <iostream>

class Check : public Buy {
public:
    void printProductInfo() {
        std::cout << "Товар:        " << getName()                      << std::endl;
        std::cout << "Цена:         " << getPrice()     << " рублей"    << std::endl;
        std::cout << "Масса:        " << getWeight()    << " кг"        << std::endl;
    }

    void printBuyInfo() {
        std::cout << "Куплено:      " << getSum()       << " шт"        << std::endl;
        std::cout << "На сумму:     " << getSumPrice()  << " рублей"    << std::endl;
        std::cout << "Общая масса:  " << getSumWeight() << " кг"        << std::endl;
    }
};

#endif //OOP_CHECK_H