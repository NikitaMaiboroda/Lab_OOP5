#ifndef ADVANCED_CYBORG_H
#define ADVANCED_CYBORG_H

#include <iostream>
#include "cyborg.h"
#include "machine.h"
#include "organism.h"

class AdvancedCyborg : public Cyborg, public Machine, public Organism {
private:
    int energy_level;

public:
    AdvancedCyborg(
        std::string name_val, int age_val, bool weapon_val, std::string model_val, int power_val,
        std::string sn_val,
        std::string species_val,
        int energy_val)
        : Human(name_val, age_val),
          Cyborg(name_val, age_val, weapon_val, model_val, power_val),
          Machine(sn_val),
          Organism(species_val),
          energy_level(energy_val) {
        std::cout << "AdvancedCyborg constructor (" << GetName() << ")" << std::endl;
    }

    ~AdvancedCyborg() {
        std::cout << "AdvancedCyborg destructor (" << GetName() << ")" << std::endl;
    }

    void Identify() const override {
        std::cout << "====== Advanced Cyborg Identify ======" << std::endl;
        Cyborg::Identify();
        Machine::DisplaySerialNumber();
        Organism::DescribeOrganism();
        std::cout << "Current energy level: " << energy_level << "%." << std::endl;
        std::cout << "====================================" << std::endl;
    }
};


#endif // ADVANCED_CYBORG_H