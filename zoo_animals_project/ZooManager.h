//
// Created by Mark Edmunds on 3/9/25.
//

#ifndef ZOOMANAGER_H
#define ZOOMANAGER_H

#include <string>
#include <iostream>
#include <vector>
#include "Animal.h"
#include "Hyena.h"
#include "Lion.h"
#include "Tiger.h"
#include "Bear.h"


namespace zooManager {
    class ZooManager {
    protected:
        std::vector<animal::Hyena> hyenaEnclosure;
        std::vector<animal::Lion> lionEnclosure;
        std::vector<animal::Tiger> tigerEnclosure;
        std::vector<animal::Bear> bearEnclosure;
    public:
        // Default constructor
        ZooManager();

        // Constructor
        ZooManager(std::vector<animal::Hyena> hyenaEnclosure, std::vector<animal::Lion> lionEnclosure,
                   std::vector<animal::Tiger> tigerEnclosure, std::vector<animal::Bear> bearEnclosure);

        // Destructor
        virtual ~ZooManager() = default;

        // Method to add an animal to the zoo
        void addAnimal(const std::string &species, const std::string &name, int age);

        // Method to display all animals in the zoo
        void displayAnimals();

        // Method to remove an animal from the zoo
        void removeAnimal(const std::string &name);

        // Method to generate a report of all animals in the zoo
        void generateReport();
        // Method to process animals
        template<class T>
        void processAnimals(const T &animal) {
            std::string species = animal.getSpecies();
            if (species == "Hyena") {
                hyenaEnclosure.push_back(dynamic_cast<const animal::Hyena&>(animal));
            } else if (species == "Bear") {
                bearEnclosure.push_back(dynamic_cast<const animal::Bear&>(animal));
            } else if (species == "Lion") {
                lionEnclosure.push_back(dynamic_cast<const animal::Lion&>(animal));
            } else if (species == "Tiger") {
                tigerEnclosure.push_back(dynamic_cast<const animal::Tiger&>(animal));
            } else {
                std::cerr << "Unknown species: " << species << std::endl;
            }
        }
    };
} // zooManager




#endif //ZOOMANAGER_H
