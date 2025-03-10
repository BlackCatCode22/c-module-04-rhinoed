//
// Created by Mark Edmunds on 3/9/25.
//

#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using namespace std;
namespace animal {


class Animal {
protected:
    // Class properties
    string name;
    int age;
    int weight;
    string species;
    string origin;
    string birthSeason;
    string color;

public:
    // Class constructor
    Animal(const string &name, int age, int weight,const string &species, const string &origin, const string &birthSeason, const string &color);
    // Class destructor
    virtual ~Animal() = default;
    // getters and setters
    int getAge() const;
    void setAge(const int age);
    string getSpecies() const;
    void setSpecies(const string& species);
    string getName() const;
    void setName(const string& name);
    // Class methods
    virtual void displayInfo() const;

};

} // animal

#endif //ANIMAL_H
