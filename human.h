#ifndef HUMAN_H
#define HUMAN_H

#include <iostream>
#include <string>

class Human {
protected:
    std::string name;
    int age;

public:
    Human(std::string name, int age) : name(name), age(age) {
        std::cout << "Human constructor\n";
    }
    virtual ~Human() {
        std::cout << "human destructor\n";
    }
    void Identify() const {
        std::cout << "I am " << name << ", " << age << " years old.\n";
    }
};

#endif // HUMAN_H
