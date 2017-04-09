#include <iostream>
#include <vector>
#include <string>
#include "FileManagement/LogManager.h"

using namespace std;

class Product {
public:
    Product() { }
    virtual ~Product() { }

    void writeToFile() {
        string message = "Price of the " + getName() + " is " + getPrice() + ".\n";
        LogManager& logManager = LogManager::getInstance();
        logManager.writeToFile(message);
    }

    virtual string getName() = 0;
    virtual string getPrice() = 0;
};

class Toy : public Product {
public:
    double price;

    Toy() { }
    Toy(double price) {
        this->price = price;
    }
    ~Toy() { }

    string getName() {
        return "Toy";
    }

    string getPrice() {
        return "$" + to_string(price);
    }
};

class IceCream : public Product {
public:
    double price;

    IceCream() { }
    IceCream(double price) {
        this->price = price;
    }
    ~IceCream() { }

    string getName() {
        return "Ice cream";
    }

    string getPrice() {
        return "$" + to_string(price);
    }
};

/**
 *  Класс, содержащий весь модельный ряд того или иного автомобильного концерна
 */
class Lineup {
public:
    ~Lineup() {
        int i;
        for (i = 0; i < vectorToy.size(); i++)      delete vectorToy[i];
        for (i = 0; i < vectorIceCream.size(); i++) delete vectorIceCream[i];
    }
    void writeToFile() {
        int i;
//        for (i = 0; i < vectorToy.size(); i++)      vectorToy[i]->info();
//        for (i = 0; i < vectorIceCream.size(); i++) vectorIceCream[i]->info();

        // Запись информации в файл
        for (i = 0; i < vectorToy.size(); i++)      vectorToy[i]->writeToFile();
        for (i = 0; i < vectorIceCream.size(); i++) vectorIceCream[i]->writeToFile();
    }

    vector<Toy*>        vectorToy;
    vector<IceCream*>   vectorIceCream;
};

int main() {
    Lineup lineupOfProduct;
    double prices1[10] = {1.1, 0.88, 1.54, 2.32, 0.98, 1.41, 1.04, 1, 1.1, 0.15};
    double prices2[10] = {0.60, 0.78, 0.54, 0.32, 0.9, 0.84, 0.56, 0.47, 0.74, 0.62};
    for (int i = 0; i < 10; i++) {
        lineupOfProduct.vectorToy.push_back(new Toy(prices1[i]));
        lineupOfProduct.vectorIceCream.push_back(new IceCream(prices2[i]));
    }
    lineupOfProduct.writeToFile();
    return 0;
}