#ifndef MACHINE_H
#define MACHINE_H

#include <iostream>
#include <string>

class Machine {
protected:
    std::string serial_number;
public:
    Machine(std::string sn = "SN000") : serial_number(sn) {
        std::cout << "Machine constructor (SN: " << serial_number << ")" << std::endl;
    }
    virtual ~Machine() {
        std::cout << "Machine destructor (SN: " << serial_number << ")" << std::endl;
    }
    virtual void DisplaySerialNumber() const {
        std::cout << "Machine Serial Number: " << serial_number << std::endl;
    }
};

#endif // MACHINE_H
