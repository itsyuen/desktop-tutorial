// my restart cpp program

#include <iostream>
#include "test.h" 

//using namespace std; this is used in .h headers?

namespace demo {
// made a sturct (public class for data strorage)
    int ColorCode::mixColor(const std::string& a, const std::string& b){
        return 0;
    };

    ColorCode red{255, 0, 0, "red"};
    ColorCode green{0, 255, 0, "green"};
    ColorCode blue{0, 0, 255,"blue"};
// make a fruit class and some array structures
// use std::library of array kind to make sure
// use pointers to practice using a full object to compare apples and oranges.

    Fruit::Fruit(std::string name, double w, std::string c)
        : fruitname(std::move(name)), weight(w), color(std::move(c)) {}

    double Fruit::getWeight() const {return weight;}

    const std::string& Fruit::getColor() const {return color;}

    const std::string& Fruit::getName() const {return fruitname;}

    void Fruit::setWeight(double a) { weight = a; }

    void Fruit::setColor(std::string c) { color = std::move(c); }

    void Fruit::setName(std::string name) { fruitname = std::move(name); }

    int compareFruitByWeight(const Fruit& a, const Fruit& b) {
        std::cout << "comparing " << a.getName()  << " vs " << b.getName() << std::endl;
        if (a.getWeight() < b.getWeight()) {
            std::cout << a.getName() << " is lighter!" << std::endl;
            return -1;
        }
        else if (a.getWeight() > b.getWeight()) {
            std::cout << b.getName() << " is lighter!" << std::endl;
            return 1;
        }
        return 0;
    }

    int mixFruitByColor(const Fruit& a, const Fruit& b) {
        std::cout << "first fruit is: " << std::endl;
        std::cout << a.getColor() << std::endl;
        std::cout << "second fruit is: " << std::endl;
        std::cout << b.getColor() << std::endl;
        return 0;
    }
}
