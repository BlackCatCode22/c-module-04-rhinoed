//
// Created by Mark Edmunds on 3/9/25.
//

#ifndef LION_H
#define LION_H
#include <string>
#include "Animal.h"
namespace animal {

class Lion : public Animal{
    // Lion names
    static std::string names[12];
public:
    // Constructor
    Lion(const std::string &name, int age);
    // Method
    void roar();
    std::string generateName();

};

} // animal

#endif //LION_H
