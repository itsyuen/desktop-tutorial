// robo2.h

#pragma once
#include <vector>
#include <string>

class Person {
    // default private data in class
    std::string name;

    public:
    Person(const std::string& name);
    const std::string getName();
    void setName(const std::string& name);

};

//void RoboCopy(std::vector<Person> people);

//void RoboCopy_AutoRef(std::vector<Person> people);

//void RoboCopy_PersonPtr(std::vector<Person*> people);

//void RoboCopy_AutoRef_PersonPtr(std::vector<Person*> people);


