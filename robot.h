#ifndef ROBOT_H
#define ROBOT_H

#include <iostream>
#include <string>
#include "human.h"

class Robot : virtual public Human {
public:
    Robot(std::string name, int age) : Human(name, age) {
        std::cout << "Robot constructor\n";
    }
    virtual ~Robot() {
        std::cout << "robot destructor\n";
    }
};

#endif // ROBOT_H
