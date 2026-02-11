// mian program for starting all objects for runtime execution.

#include <iostream>
// #include "test.h"
#include "robo.h"
#include <vector>
#include <string>

int main(){
/*
    // instances of two objects, practice constant objects and non-constant object to change its weights.
    demo::Fruit apple("apple", 0.2, "red");
   
    demo::Fruit orange("orange", 0.25, "orange");
    
    int r = demo::compareFruitByWeight(apple, orange);

    //std::cout << r <<std::endl;
    
    demo::Fruit banana("banana", 0.125, "yellow");
   
    r = demo::compareFruitByWeight(banana, orange);
    
    demo::mixFruitByColor(banana, apple);
*/


    std::cout << "running main!" << std::endl;
    // test Robo_ copy 
    std::vector<Person> team{
        Person("Alice"),
        Person("Bianca"),
        Person("Caitlyn")
    };

    /*

    RoboCopy(team);
    std::cout << "Outside RoboCopy:\n";
    for (auto p : team) {
       std::cout << "    " << p.name << std::endl;
    }

    RoboCopy_AutoRef(team);
    std::cout << "Outside RoboCopy_AutoRef:\n";
    for (auto p: team){
        std::cout << "    " << p.name << std::endl;
    }
*/
    

    std::vector<Person*> teamPtr {&team[0], &team[1], &team[2]};
    std::cout << "before calling functions, the team is: " << std::endl;
    for (auto & p: teamPtr){
        std::cout << p->name << std::endl;
    }

    RoboCopy_PersonPtr(teamPtr);
    std::cout << "Outside RoboCopy_PersonPtr:\n";
    for (auto p: teamPtr){
        std::cout << "    " << p->name << std::endl;
    }

    std::cout << "resetting team member name into origin: " << std::endl;
    for (auto & p : teamPtr){
        if (p && p->name.starts_with("Robo_")){
            p->name.erase(0, 5);
        }
    }

    bool result {0};
    std::cout << "adding members: " << std::endl;
    for (auto & p: teamPtr){
        if (p && p->name == "Dina") result = 1;
    }
    std::cout << "re = " << result << std::endl;
    if (result == 0) team.push_back(Person("Dina"));

    for (auto & p: team){
        std::cout << p.name << std::endl;
    }
    // reassign teamPtr
    teamPtr = {&team[0], &team[1], &team[2], &team[3]};

    RoboCopy_AutoRef_PersonPtr(teamPtr);
    std::cout << "Outside RoboCopy_AutoRef_PersonPtr:\n";
    for (auto p: teamPtr){
        std::cout << "    " << p->name << std::endl;
    }

    std::cout << team[0].name << std::endl;
    std::cout << teamPtr[2] ->name << std::endl;
    std::cout << team.size() << std::endl;

    return 0;
}