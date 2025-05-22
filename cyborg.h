// cyborg.h
#ifndef CYBORG_H
#define CYBORG_H

#include <iostream>
#include "robot.h"
#include "aiunit.h"

class Cyborg : public Robot, public AIUnit {
private:
    bool hasWeapon;

public:
    Cyborg(std::string name_val, int age_val, bool weapon_val, std::string model_val = "CyborgModel", int power_val = 200)
        : Human(name_val, age_val),
          Robot(name_val, age_val, model_val),
          AIUnit(name_val, age_val, power_val),
          hasWeapon(weapon_val) {
        std::cout << "Cyborg constructor (" << GetName() << ")" << std::endl;
    }

    ~Cyborg() {
        std::cout << "Cyborg destructor (" << GetName() << ")" << std::endl;
    }

    void Identify() const override {
        std::cout << "--- Cyborg Identify ---" << std::endl;
        Human::Identify();
        std::cout << "I am a Robot of model " << model_name << "." << std::endl;
        std::cout << "I am an AIUnit with processing power of " << processing_power << "." << std::endl;
        std::cout << "I am a Cyborg and I "
                  << (hasWeapon ? "have a weapon." : "do not have a weapon.") << std::endl;
        std::cout << "--- End Cyborg Identify ---" << std::endl;
    }
};

#endif // CYBORG_H
