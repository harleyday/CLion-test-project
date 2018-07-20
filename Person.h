//
// Created by hd1213 on 03/05/2018.
//

#ifndef CPPTESTPROJECT_PERSON_H
#define CPPTESTPROJECT_PERSON_H

class string;

// create a new class called Person
class Person {
// public variables and functions
public:
    // class constructor
    Person();

    std::string name;
    int age;

    void setName(std::string);

    void setAge(int);
};


#endif //CPPTESTPROJECT_PERSON_H
