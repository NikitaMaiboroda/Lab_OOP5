#ifndef HUMAN_H
#define HUMAN_H

#include <iostream>
#include <string>

class Human {
protected:
    std::string name;
    int age;

public:
    Human(std::string name_val = "HumanBase", int age_val = 0) : name(name_val), age(age_val) {
        std::cout << "Human constructor (" << name << ", " << age << ")" << std::endl;
    }
    virtual ~Human() {
        std::cout << "Human destructor (" << name << ")" << std::endl;
    }
    virtual void Identify() const {
        std::cout << "I am a Human named " << name << ", " << age << " years old." << std::endl;
    }
    std::string GetName() const { return name; }
    int GetAge() const { return age; }
};

#endif // HUMAN_H