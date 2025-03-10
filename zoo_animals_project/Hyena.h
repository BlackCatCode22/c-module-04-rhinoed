//
// Created by Mark Edmunds on 3/9/25.
//

#ifndef HYENA_H
#define HYENA_H
#include <string>
#include "Animal.h"

namespace animal {

class Hyena : public Animal {
    // protected names array

    // Hyena Names
    // Create a static array of strings to store the names of the hyenas
    static std::string names[11];
public:
    // Constructor
    Hyena(const std::string &name, int age);
    // Method
    void laugh();

    static std::string generateName();

};

} // animal

#endif //HYENA_H
