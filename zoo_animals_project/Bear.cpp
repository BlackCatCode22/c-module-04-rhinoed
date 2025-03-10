//
// Created by Mark Edmunds on 3/9/25.
//

#include "Bear.h"
#include <iostream>
#include <string>

namespace animal {
    // Bear names
    std::string Bear::names[10] = {"ogi", "Smokey", "Paddington", "Lippy", "Bungle", "Baloo", "Rupert", "Winnie the Pooh", "Snuggles", "Bert"};
    Bear::Bear(const std::string &name, int age) : Animal(name, age, "Bear") {}

    void Bear::hibernate() {
        std::cout << name << ", the bear is going into hibernation." << "\n";
    }

    std::string Bear::generateName() {
        // Pick a random name from the array
        int randomIndex = rand() % 11;
        std::string randomName = names[randomIndex];
        return randomName;
    }
} // animal