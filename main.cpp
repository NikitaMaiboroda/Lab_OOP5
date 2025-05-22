#include <iostream>
#include "cyborg.h"
#include "advanced_cyborg.h"

int main() {
    std::cout << "--- Створення об'єкта Human (для тестування) ---" << std::endl;
    Human h_base("Просто Людина", 30);
    h_base.Identify();
    std::cout << "---------------------------------------------\n" << std::endl;

    std::cout << "--- Створення об'єкта Robot (для тестування) ---" << std::endl;
    Robot r_base("Робокоп", 5, "RX-8");
    r_base.Identify();
    std::cout << "--------------------------------------------\n" << std::endl;

    std::cout << "--- Створення об'єкта AIUnit (для тестування) ---" << std::endl;
    AIUnit ai_base("Скайнет", 1, 1000);
    ai_base.Identify();
    std::cout << "----------------------------------------------\n" << std::endl;

    std::cout << "\n--- Створення об'єкта Cyborg (ромбовидне успадкування Human) ---\n" << std::endl;
    Cyborg entity_cyborg("Термінатор", 45, true, "T-800", 500);
    entity_cyborg.Identify();
    std::cout << "\n--- Об'єкт Cyborg знищується... ---\n" << std::endl;

    std::cout << "\n--- Створення об'єкта AdvancedCyborg (успадкування від трьох батьків) ---\n" << std::endl;
    AdvancedCyborg adv_entity("Гріфус", 100, true, "CX-1000", 1500, "SN777", "Xenomorph-Humanoid Hybrid", 95);
    adv_entity.Identify();
    std::cout << "\n--- Об'єкт AdvancedCyborg знищується... ---\n" << std::endl;

    std::cout << "\n--- Демонстрація поліморфізму з віртуальним успадкуванням ---" << std::endl;
    Human* ptr_human_cyborg = new Cyborg("Кіборг Полі", 20, false);
    ptr_human_cyborg->Identify();
    delete ptr_human_cyborg;
    std::cout << "------------------------------------------------------------\n" << std::endl;

    std::cout << "\n--- Демонстрація поліморфізму з AdvancedCyborg ---" << std::endl;
    Machine* ptr_machine_adv_cyborg = new AdvancedCyborg("Машинний Аспект", 50, true, "M-ADV", 2000, "SN-ADV-001", "TechnoOrganic", 80);
    ptr_machine_adv_cyborg->DisplaySerialNumber();
    AdvancedCyborg* casted_adv_cyborg = dynamic_cast<AdvancedCyborg*>(ptr_machine_adv_cyborg);
    if (casted_adv_cyborg) {
        casted_adv_cyborg->Identify();
    }
    delete ptr_machine_adv_cyborg;
    std::cout << "-----------------------------------------------------\n" << std::endl;


    return 0;
}