#ifndef CYBORG_H
#define CYBORG_H

#include <iostream>
#include "robot.h"
#include "aiunit.h"

class Cyborg : public Robot, public AIUnit {
private:
    bool hasWeapon;

public:
    Cyborg(std::string name, int age, bool hasWeapon)
        : Human(name, age), Robot(name, age), AIUnit(name, age), hasWeapon(hasWeapon) {
        std::cout << "Cyborg constructor\n";
    }

    ~Cyborg() {
        std::cout << "cyborg destructor\n";
    }

    void Identify() const {
        Human::Identify();
        std::cout << "I am a cyborg with "
                  << (hasWeapon ? "a weapon." : "no weapon.") << std::endl;
    }
};

#endif // CYBORG_H
