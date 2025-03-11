//
// Created by Mark Edmunds on 3/9/25.
//

#ifndef PARSER_H
#define PARSER_H
#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include <sstream>
#include "Bear.h"
#include "Hyena.h"
#include "Lion.h"
#include "Tiger.h"
using namespace animal;
string filename = "../arrivingAnimals.txt";
// Function to parse each line of the input file into a 2d vector of strings by splitting each line by the delimiter ","
std::vector<std::vector<std::string>> parseFile(std::string filename) {
    // File data
    std::vector<std::vector<std::string>> data;
    // Open the file
    std::ifstream file(filename);
    // Read each line of the file
    std::string line = "";
    while (std::getline(file, line)) {
        // Remove any carriage return characters
        line.erase(std::remove(line.begin(), line.end(), '\r'), line.end());

        std::vector<std::string> row;
        std::string cell;
        std::istringstream lineStream(line);
        while (std::getline(lineStream, cell, ',')) {
            row.push_back(cell);
        }
        data.push_back(row);
    }


    // Close the file
    file.close();
    // Return the 2d vector of strings
    return data;
};
// Function that takes a string and splits it into a vector of strings and returns a string at an index
std::string splitString(std::string str, char delimiter, int index) {
    std::vector<std::string> tokens;
    std::string token;
    // strip the leading and trailing whitespace off str
    str.erase(0, str.find_first_not_of(' '));
    std::istringstream tokenStream(str);
    while (std::getline(tokenStream, token, delimiter)) {
        tokens.push_back(token);
    }
    return tokens[index];
}
#endif //PARSER_H
