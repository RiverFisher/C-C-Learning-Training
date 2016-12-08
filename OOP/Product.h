#ifndef OOP_PRODUCT_H
#define OOP_PRODUCT_H

class Product {
private:
    /**
     * Наименование товара
     */
    char    name[50];
    /**
     * Стоимость товара
     */
    double  price,
    /**
     * Масса единицы товара
     */
            weight;
public:
    Product();

    ~Product();

    /**
     * Установить наименование товара
     */
    void setName(const char *);
    /**
     * Получить наименование товара
     *
     * @return
     */
    const char *getName() const;

    /**
     * Установить стоимость товара
     */
    void setPrice(const double &);
    /**
     * Получить стоимость товара
     *
     * @return
     */
    double getPrice() const;
    /**
     * Установить массу единицы товара
     */
    void setWeight(const double &);
    /**
     * Получить массу единицы товара
     *
     * @return
     */
    double getWeight() const;
};

#endif //OOP_PRODUCT_H
