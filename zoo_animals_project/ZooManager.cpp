//
// Created by Mark Edmunds on 3/9/25.
//

#include "ZooManager.h"
#include <iostream>
#include <vector>
#include <ostream>

namespace zooManager {
    ZooManager::ZooManager() {};

    ZooManager::ZooManager(std::vector<animal::Hyena> hyenaEnclosure, std::vector<animal::Lion> lionEnclosure, std::vector<animal::Tiger> tigerEnclosure, std::vector<animal::Bear> bearEnclosure) {}

    void ZooManager::addAnimal(const std::string &species, const std::string &name, int age) {
        // TODO: Implement this function
    }

    void ZooManager::displayAnimals() {
        // Display all animals in the zoo
        for (const auto &hyena : hyenaEnclosure) {
            std::cout << "Hyena Enclosure: \n";
            hyena.displayInfo();
        }
        for (const auto &lion : lionEnclosure) {
            std::cout << "Lion Enclosure: \n";
            lion.displayInfo();
        }
        for (const auto &tiger : tigerEnclosure) {
            std::cout << "Tiger Enclosure: \n";
            tiger.displayInfo();
        }
        for (const auto &bear : bearEnclosure) {
            std::cout << "Bear Enclosure: \n";
            bear.displayInfo();
        }
    }



    void ZooManager::removeAnimal(const std::string &name) {
        // TODO: Implement this function
    }

    void ZooManager::generateReport() {
        // Open a file for writing

    }
}// zooManager