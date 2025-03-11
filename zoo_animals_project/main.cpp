#include <iostream>
#include <string>
#include "Animal.h"
#include "Hyena.h"
#include "Parser.h"
#include "ZooManager.h"

using namespace animal;
using namespace std;
int main() {
    // Create an instance of the ZooManager class
    zooManager::ZooManager zooManager;
    // Define the filename
    string filename = "../arrivingAnimals.txt";
    // Call the parsefile function and print the data in the first row
    std::vector<std::vector<std::string>> data = parseFile(filename);
    // for each row call the splitString function and create age and species
    for (int i =0; i < data.size(); i++) {
        string age = splitString(data[i][0], ' ', 0);
        string weight = splitString(data[i][3], ' ', 0);
        string species = splitString(data[i][0], ' ', 4);
        string birthSeason = splitString(data[i][1], ' ', 2);
        string origin = splitString(data[i][5], ' ', 0);
        string color = data[i][2];
        color.erase(0, color.find_first_not_of(' '));
        //cout << data[i][4] << "\n";
        if (species == "hyena") {
            string hyenaName = Hyena::generateName();
            Hyena hyena(hyenaName, stoi(age), stoi(weight), species, origin, birthSeason, color);
            zooManager.processAnimals(hyena);
        } else if (species == "bear") {
            std::string bearMame = Bear::generateName();
            Bear bear(bearMame, stoi(age), stoi(weight), species, origin, birthSeason, color);
            zooManager.processAnimals(bear);
        } else if (species == "lion") {
            std::string lionName = Lion::generateName();
            Lion lion(lionName, stoi(age), stoi(weight), species, origin, birthSeason, color);
            zooManager.processAnimals(lion);
        } else if (species == "tiger") {
            std::string tigerName = Tiger::generateName();
            Tiger tiger(tigerName, stoi(age), stoi(weight), species, origin, birthSeason, color);
            zooManager.processAnimals(tiger);
        } else {
            cerr << "Unknown species: " << species << endl;
            return 1;
        }

    }
    // Display all animals in the zoo
    zooManager.displayAnimals();
    zooManager.generateReport();

    return 0;
}
