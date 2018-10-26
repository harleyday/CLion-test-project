#include <iostream>
#include <string>
#include "Person.h"

class endl;

class cout;

int main(void) {
    // create a new person named bob
    Person bob;

    // define bob
    bob.setName("Bob");
    bob.setAge(29);

    // display bob's age
    std::cout << bob.name << " is " << bob.age << " years old." << std::endl;

    Person steve;

    // display steves's age
    std::cout << steve.name << " is " << steve.age << " years old." << std::endl;
}