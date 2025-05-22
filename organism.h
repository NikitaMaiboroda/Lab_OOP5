#ifndef ORGANISM_H
#define ORGANISM_H

#include <iostream>
#include <string>

class Organism {
protected:
    std::string species_name;
public:
    Organism(std::string species = "UnknownSpecies") : species_name(species) {
        std::cout << "Organism constructor (Species: " << species_name << ")" << std::endl;
    }
    virtual ~Organism() {
        std::cout << "Organism destructor (Species: " << species_name << ")" << std::endl;
    }
    virtual void DescribeOrganism() const {
        std::cout << "Organism Species: " << species_name << std::endl;
    }
};

#endif // ORGANISM_H