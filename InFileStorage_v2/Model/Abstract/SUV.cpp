#include "SUV.h"

SUV::SUV()
        : Car(),
          drive(FourWheel) { }

SUV::SUV(string defaultColor)
        : Car(defaultColor),
          drive(FourWheel) { }

SUV::SUV(string defaultColor, int defaultNumberOfDoors)
        : Car(defaultColor, defaultNumberOfDoors),
          drive(FourWheel) { }

void    SUV::blockBridge() {
    std::cout << "Bridge blocked." << std::endl;
}

void    SUV::unblockBridge() {
    std::cout << "Bridge unblocked." << std::endl;
}