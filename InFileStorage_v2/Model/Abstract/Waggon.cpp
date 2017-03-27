#include "Waggon.h"

Waggon::SUV()
        : Car(),
          drive(FourWheel) { }

Waggon::Waggon(string defaultColor)
        : Car(defaultColor),
          drive(FourWheel) { }

Waggon::Waggon(string defaultColor, int defaultNumberOfDoors)
        : Car(defaultColor, defaultNumberOfDoors),
          drive(FourWheel) { }

void    Waggon::submerge() {
    std::cout << "Submerged." << std::endl;
}

void    Waggon::unload() {
    std::cout << "Unloaded." << std::endl;
}