#include "Crossover.h"

Crossover::Crossover()
        : Car(),
          drive(FourWheel) { }

Crossover::Crossover(string defaultColor)
        : Car(defaultColor),
          drive(FourWheel) { }

Crossover::Crossover(string defaultColor, int defaultNumberOfDoors)
        : Car(defaultColor, defaultNumberOfDoors),
          drive(FourWheel) { }

void    Crossover::switchOnOverdrive() {
    std::cout << "Overdrive switched on." << std::endl;
}

void    Crossover::switchOffOverdrive() {
    std::cout << "Overdrive switched off." << std::endl;
}