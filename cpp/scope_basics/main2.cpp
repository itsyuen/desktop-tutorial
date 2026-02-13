// mian program for starting all objects for runtime execution.

#include "robo2.h"
#include <iostream>

int main(){
    std::cout << "running main!" << std::endl;
    // test Robo_ copy 
    std::vector<Person> team{
        Person("Alice"),
        Person("Bianca"),
        Person("Caitlyn")
    };

    std::vector<Person*> teamPtr {&team[0], &team[1], &team[2]};

    for (auto & p: team){
        std::cout << "    " << p.getName() << std::endl;
    }
    
    std::cout << "Please input a Lastname\n";
    std::string lastname;
    std::cin >> lastname;

    for (auto &p : team){
        p.setName(lastname);
        std::cout << "New name is: " << p.getName() << std::endl; 
    }

    /*
    std::cout << team[0].name << std::endl;
    std::cout << teamPtr[2] ->name << std::endl;
    std::cout << team.size() << std::endl;
    */

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
        std::string prefix {"Robo_"};
        if (p && p->name.compare(0, prefix.size(), prefix) == 0){
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
    */
   
    return 0;

}





