#include "Product.h"
#include <iostream>
#include <cstring>

Product::Product() : price(0.0), weight(0.0) {
    for (int counter = 0; counter < 50; counter++) {
        name[counter] = '\0';
    }
}

Product::~Product() {
    std::cout << "Товар удалён" << std::endl;
}

void Product::setName(const char *name) {
    /**
     * Имя товара копируем в элемент данных класса
     */
    strcpy(this->name, name);
}

const char *Product::getName() const {
    return name;
}

void Product::setPrice(const double & price) {
    this->price = (price >= 0 ? price : 0);
}

double Product::getPrice() const {
    return price;
}

void Product::setWeight(const double & weight) {
    this->weight = weight;
}

double Product::getWeight() const {
    return weight;
}