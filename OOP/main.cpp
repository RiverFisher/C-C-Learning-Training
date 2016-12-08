#include <iostream>
#include "Check.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "rus");

    const char *products[6] = {
        "Навага свежемороженая (брикет)", "Тефтели из говядины", "Пельмени \"Сибирские\"", "Блины (ветчина и сыр)",
        "Фрукты замороженные", "Хинкали \"Сочинские\""
    };
    int prices[6] = {270, 135, 260, 192, 380, 410};
    double weights[6] = {1, 0.5, 1, 0.135, 0.6, 0.8};
    int sum[6] = {3, 4, 1, 6, 1, 8};

    Check product[6];

    for (int i = 0; i < 6; i++) {
        product[i].setName(products[i]);
        product[i].setPrice(prices[i]);
        product[i].setWeight(weights[i]);

        product[i].setSum(sum[i]);

        product[i].printProductInfo();
        product[i].printBuyInfo();

        (&product[i])->~Check();
    }

    system("pause");
    return 0;
}
