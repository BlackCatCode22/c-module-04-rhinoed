//
// Created by Mark Edmunds on 3/9/25.
//

#include "Bear.h"
#include <iostream>
#include <string>

namespace animal {
    // Bear names
    std::string Bear::names[10] = {"Yogi", "Smokey", "Paddington", "Lippy", "Bungle", "Baloo", "Rupert", "Winnie the Pooh", "Snuggles", "Bert"};
    // Constructor
    Bear::Bear(const std::string &name, int age, int weight, const std::string &species, const std::string &origin, const std::string &birthSeason, const std::string &color) : Animal(name, age, weight, "Bear", origin, birthSeason, color) {}

    void Bear::hibernate() {
        std::cout << name << ", the bear is going into hibernation." << "\n";
    }

    std::string Bear::generateName() {
        // Pick a random name from the array
        int randomIndex = rand() % 10;
        std::string randomName = names[randomIndex];
        return randomName;
    }
} // animal