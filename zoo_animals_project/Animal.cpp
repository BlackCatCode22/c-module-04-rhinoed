//
// Created by Mark Edmunds on 3/9/25.
//

#include "Animal.h"
#include <string>
#include <iostream>
using namespace std;
namespace animal {
    // Constructor


    Animal::Animal(
        const string &name,
        int age, int weight,
        const string &species,
        const string &origin,
        const string &birthSeason,
        const string &color
        )
        : name(name),
        age(age), weight(weight),
        species(species),
        origin(origin),
        birthSeason(birthSeason),
        color(color) {
    }

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

    string Animal::getOrigin() const {
        return origin;
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

    void Animal::setOrigin(const string &origin) {
        this->origin = origin;
    }

    // Display Method
    void Animal::displayInfo() const {
        std::cout << "\nName: " << name << "\nAge: " << age  << "\nWeight: " << weight  << "\nOrigin: " << origin << "\nBirth Season: " << birthSeason << "\nColor: " << color <<"\n";
    }

} // animal