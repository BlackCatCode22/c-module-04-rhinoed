//
// Created by Mark Edmunds on 3/9/25.
//

#include "Tiger.h"
#include <iostream>

namespace animal {

    // Tiger names
    std::string Tiger::names[10] = {"Tony", "Tigger", "Amber", "Cosimia", "Cuddles", "Dave", "Jiba", "Rajah", "Rayas", "Ryker"};

    // Constructor
    Tiger::Tiger(const std::string &name, int age, int weight, const std::string &species, const std::string &origin, const std::string &birthSeason, const std::string &color) : Animal(name, age, weight, "Tiger", origin, birthSeason, color) {}

    void Tiger::countStripes() {
        int stripes;
        std::cout << "How many stripes does the tiger have?" << std::endl;
        std::cin >> stripes;
        std::cout << "The tiger has " << stripes << " stripes" << std::endl;
    }

    std::string Tiger::generateName() {
        // Pick a random name from the array
        int randomIndex = rand() % 10;
        std::string randomName = names[randomIndex];
        return randomName;
    }
} // animal