// main.cpp
#include <iostream>
#include "cyborg.h"

int main() {
    std::cout << "\nСтворення об'єкта Cyborg:\n" << std::endl;
    Cyborg entity("Термінатор", 45, true);
    entity.Identify();
    std::cout << "\nОб'єкт знищується...\n" << std::endl;
    return 0;
}
