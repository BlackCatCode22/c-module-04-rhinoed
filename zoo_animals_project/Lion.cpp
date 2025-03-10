//
// Created by Mark Edmunds on 3/9/25.
//

#include "Lion.h"
#include <iostream>

namespace animal {
    // Lion names
    std::string Lion::names[12] = {"Scar", "Mufasa", "Simba", "Kiara", "King", "Drooper", "Kimba", "Nala", "Leo", "Samson", "Elsa", "Cecil"};
    // Constructor
    Lion::Lion(const std::string &name, int age) : Animal(name, age, "Lion") {}
    void Lion::roar() {
        std::cout << name << ", the lion roars" << std::endl;
    }

    std::string Lion::generateName() {
        // Pick a random name from the array
        int randomIndex = rand() % 11;
        std::string randomName = names[randomIndex];
        return randomName;
    }
} // animal