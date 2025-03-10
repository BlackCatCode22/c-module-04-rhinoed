//
// Created by Mark Edmunds on 3/9/25.
//

#include "Animal.h"
#include <string>
#include <iostream>
using namespace std;
namespace animal {
    // Constructor
    Animal::Animal(const std::string &name, int age, const std::string &species)
        : name(name), age(age), species(species) {}

    // Getters
    int Animal::getAge() const {
        return age;
    }

    std::string Animal::getSpecies() const {
        return species;
    }

    std::string Animal::getName() const {
        return name;
    }

    // Setters
    void Animal::setAge(int age) {
        this->age = age;
    }

    void Animal::setSpecies(const std::string &species) {
        this->species = species;
    }

    void Animal::setName(const std::string &name) {
        this->name = name;
    }

    // Display Method
    void Animal::displayInfo() const {
        std::cout << "\nName: " << name << "\nAge: " << age << std::endl;
    }

} // animal