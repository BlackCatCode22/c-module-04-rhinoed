//
// Created by Mark Edmunds on 3/9/25.
//

#ifndef TIGER_H
#define TIGER_H
#include <string>
#include "Animal.h"
namespace animal {

class Tiger : public Animal {
    // Tiger names
    static std::string names[11];
public:
    // Constructor
    Tiger(const std::string &name, int age);
    // Method
    void countStripes();
    std::string generateName();
};

} // animal

#endif //TIGER_H
