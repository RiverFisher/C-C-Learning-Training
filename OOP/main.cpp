#include <iostream>
#include <string>
#include "Check.h"

int main() {
    setlocale(LC_ALL, "rus");

    string products = {""};

    Check product;

    product.setName("Навага свежемороженая (брикет)");
    product.setPrice(270);
    product.setWeight(1);

    product.setSum(16);

    product.printProductInfo();
    product.printBuyInfo();

    (&product)->~Check();

    system("pause");
    return 0;
}