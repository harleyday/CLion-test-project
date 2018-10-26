//
// Created by hd1213 on 03/05/2018.
//
#include <string>
#include "Person.h"

class Person;

// define the class constructor
Person::Person() {
    // initialize some variables...
    name = "default name";
    age = 23;
}

// define the setName() function in the Person class
void Person::setName(std::string userName) {
    // set the name variable in the Person class to the given argument userName
    name = userName;
}

// define the setAge() function in the Person class
void Person::setAge(int userAge) {
    // set the age variable in the Person class to the given argument userAge
    age = userAge;
}
