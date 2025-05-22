#ifndef ROBOT_H
#define ROBOT_H

#include <iostream>
#include <string>
#include "human.h" // Включаємо базовий клас

class Robot : virtual public Human {
protected:
    std::string model_name;
public:
    Robot(std::string name_val = "RobotBase", int age_val = 0, std::string model = "GenericBot")
        : Human(name_val, age_val), model_name(model) {
        std::cout << "Robot constructor (" << GetName() << ", model: " << model_name << ")" << std::endl;
    }
    virtual ~Robot() {
        std::cout << "Robot destructor (" << GetName() << ", model: " << model_name << ")" << std::endl;
    }
    void Identify() const override {
        Human::Identify();
        std::cout << "I am a Robot of model " << model_name << "." << std::endl;
    }
};

#endif // ROBOT_H
