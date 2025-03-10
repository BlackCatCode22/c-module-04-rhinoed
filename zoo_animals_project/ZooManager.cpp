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
        std::map<std::string, int> animalCount = countAnimals();
        std::cout << "\nHyena Enclosure ("<< animalCount["Hyena"] << "):" << "\n";
        for (const auto &hyena : hyenaEnclosure) {
            hyena.displayInfo();
        }
        std::cout << "\nLion Enclosure ("<< animalCount["Lion"] << "):" << "\n";
        for (const auto &lion : lionEnclosure) {

            lion.displayInfo();
        }
        std::cout << "\nTiger Enclosure ("<< animalCount["Tiger"] << "):" << "\n";
        for (const auto &tiger : tigerEnclosure) {
            tiger.displayInfo();
        }
        std::cout << "\nBear Enclosure ("<< animalCount["Bear"] << "):" << "\n";
        for (const auto &bear : bearEnclosure) {
            bear.displayInfo();
        }
    }



    void ZooManager::removeAnimal(const std::string &name) {
        // TODO: Implement this function
    }

    void ZooManager::generateReport() {
        // Open a file for writing

    }

    std::map<std::string, int> ZooManager::countAnimals() {
        std::map<std::string,int> animalCount;
        animalCount["Hyena"] = static_cast<int>(hyenaEnclosure.size());
        animalCount["Lion"] = static_cast<int>(lionEnclosure.size());
        animalCount["Tiger"] = static_cast<int>(tigerEnclosure.size());
        animalCount["Bear"] = static_cast<int>(bearEnclosure.size());
        return animalCount;
    }
}// zooManager