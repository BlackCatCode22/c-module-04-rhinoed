//
// Created by Mark Edmunds on 3/9/25.
//

#ifndef BEAR_H
#define BEAR_H
#include "Animal.h"
#include <string>

using namespace std;

namespace animal {

class Bear : public Animal{
    // Bear names
    static std::string names[10];
public:
    // Constructor
    Bear(const std::string &name, int age);
    // Method
    void hibernate();
    static std::string generateName();
};

} // animal

#endif //BEAR_H
