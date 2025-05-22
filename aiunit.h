// aiunit.h
#ifndef AIUNIT_H
#define AIUNIT_H

#include <iostream>
#include "human.h"


class AIUnit : virtual public Human {
protected:
    int processing_power;
public:
    AIUnit(std::string name_val = "AIUnitBase", int age_val = 0, int power = 100)
        : Human(name_val, age_val), processing_power(power) {
        std::cout << "AIUnit constructor (" << GetName() << ", power: " << processing_power << ")" << std::endl;
    }
    virtual ~AIUnit() {
        std::cout << "AIUnit destructor (" << GetName() << ", power: " << processing_power << ")" << std::endl;
    }
    void Identify() const override {
        Human::Identify();
        std::cout << "I am an AIUnit with processing power of " << processing_power << "." << std::endl;
    }
};

#endif // AIUNIT_H