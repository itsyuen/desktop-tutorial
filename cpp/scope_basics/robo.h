
#include <vector>
#include <string>

class Person {
    public:
    std::string name;
    Person(std::string name) : name(name);
};

void RoboCopy(std::vector<Person> people);

void RoboCopy_AutoRef(std::vector<Person> people);

void RoboCopy_PersonPtr(std::vector<Person*> people);

void RoboCopy_AutoRef_PersonPtr(std::vector<Person*> people);

