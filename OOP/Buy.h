#ifndef OOP_BUY_H
#define OOP_BUY_H

#include "Product.h"

class Buy : public Product {
private:
    /**
     * Количество покупаемого товара (измеряется в единицах товара)
     */
    int     sum;
    /**
     * Цена за весь купленный товар
     */
    double  sumPrice,
    /**
     * Масса всего купленного товара
     */
            sumWeight;
public:
    Buy();

    /**
     * Установить количество покупаемого товара
     */
    void setSum(const int &);
    /**
     * Получить количество покупаемого товара
     *
     * @return
     */
    int getSum() const;
    /**
     * Получить стоимость всего купленного товара
     *
     * @return
     */
    double getSumPrice() const;
    /**
     * Получить общую массу покупки
     *
     * @return
     */
    double getSumWeight() const;
};

#endif //OOP_BUY_H
