#include <iostream>
#include <vector>
#include "Model/Abstract/Crossover.h"
#include "Model/Abstract/SUV.h"
#include "Model/Abstract/Waggon.h"
#include "Patterns/AbstractFactory/CarFactory.h"
#include "Patterns/AbstractFactory/JeepFactory.h"
#include "Patterns/AbstractFactory/MitsubishiFactory.h"

using namespace std;

/**
 *  Класс, содержащий весь модельный ряд того или иного автомобильного концерна
 */
class Lineup {
public:
    ~Lineup() {
        int i;
        for (i = 0; i < vectorCrossover.size(); i++)    delete vectorCrossover[i];
        for (i = 0; i < vectorSUV.size(); i++)          delete vectorSUV[i];
        for (i = 0; i < vectorWaggon.size(); i++)       delete vectorWaggon[i];
    }
    void info() {
        int i;
        for (i = 0; i < vectorCrossover.size(); i++)    vectorCrossover[i]->info();
        for (i = 0; i < vectorSUV.size(); i++)          vectorSUV[i]->info();
        for (i = 0; i < vectorWaggon.size(); i++)       vectorWaggon[i]->info();
    }

    vector<Crossover*>  vectorCrossover;
    vector<SUV*>        vectorSUV;
    vector<Waggon*>     vectorWaggon;
};

/**
 *  Здесь производятся автомобили того или иного концерна
 */
class Emulation {
public:
    Lineup* createArmy(CarFactory& factory ) {
        Lineup *lineupPointer = new Lineup;
        lineupPointer->vectorCrossover.push_back(factory.createCrossover());
        lineupPointer->vectorSUV.push_back(factory.createSUV());
        lineupPointer->vectorWaggon.push_back(factory.createWaggon());
        return lineupPointer;
    }
};

int main() {
    Emulation           emulation;
    JeepFactory         factoryOfJeep;
    MitsubishiFactory   factoryOfMitsubishi;

    Lineup * lineupOfJeep = emulation.createLineup(factoryOfJeep);
    Lineup * lineupOfMitsubishi = emulation.createLineup(factoryOfMitsubishi);

    cout << "Lineup of Jeep is:" << endl;
    lineupOfJeep->info();
    cout << "\nLineup of Mitsubishi is:" << endl;
    lineupOfMitsubishi->info();

    return 0;
}
