//
// Created by Mark Edmunds on 3/9/25.
//

#include "Hyena.h"
#include <iostream>

namespace animal {
    // Hyena Names
    std::string Hyena::names[11] ={"Shenzi", "Banzai", "Ed", "Zig", "Bud", "Lou", "Kamari", "Wema", "Nne", "Madoa", "Prince Nevarah"};

    Hyena::Hyena(const std::string &name, int age, int weight, const std::string &species, const std::string &origin, const std::string &birthSeason, const std::string &color) : Animal(name, age, weight, "Hyena", origin, birthSeason, color) {}
    void Hyena::laugh() {
        std::cout << name << ", the hyena says Hahaha" << std::endl;
    }

    std::string Hyena::generateName() {
        // Pick a random name from the array
        int randomIndex = rand() % 11;
        std::string randomName = names[randomIndex];
        return randomName;

    }
} // animal