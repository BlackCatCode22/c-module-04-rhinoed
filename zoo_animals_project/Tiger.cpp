//
// Created by Mark Edmunds on 3/9/25.
//

#include "Tiger.h"
#include <iostream>

namespace animal {

    // Tiger names
    std::string Tiger::names[11] = {"Tony", "Tigger", "Amber", "Cosimia", "Cuddles", "Dave", "Jiba", "Rajah", "Rayas", "Ryker"};

    // Constructor
    Tiger::Tiger(const std::string &name, int age) : Animal(name, age, "Tiger") {}

    void Tiger::countStripes() {
        int stripes;
        std::cout << "How many stripes does the tiger have?" << std::endl;
        std::cin >> stripes;
        std::cout << "The tiger has " << stripes << " stripes" << std::endl;
    }

    std::string Tiger::generateName() {
        // Pick a random name from the array
        int randomIndex = rand() % 11;
        std::string randomName = names[randomIndex];
        return randomName;
    }
} // animal