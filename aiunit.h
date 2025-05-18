#ifndef AIUNIT_H
#define AIUNIT_H

#include <iostream>
#include "human.h"

class AIUnit : virtual public Human {
public:
    AIUnit(std::string name, int age) : Human(name, age) {
        std::cout << "AIUnit constructor\n";
    }
    virtual ~AIUnit() {
        std::cout << "aiunit destructor\n";
    }
};

#endif // AIUNIT_H
