// my restart cpp program

#include "test.h" 

//using namespace std; this is used in .h headers?

namespace demo {
// made a sturct (public class for data strorage)
    ColorCode appleColor{255, 0, 0, "red"};
// make a fruit class and some array structures
// use std::library of array kind to make sure
// use pointers to practice using a full object to compare apples and oranges.

    Fruit::Fruit(double w, std::string c)
        : weight(w), color(std::move(c)) {}

    double Fruit::getWeight() const {return weight;}

    const std::string& Fruit::getColor() const {return color;}

    void Fruit::setWeight(double a) { weight = a; }

    void Fruit::setColor(std::string c) { color = std::move(c); }

    int compareFruitByWeight(const Fruit& a, const Fruit& b) {
        if (a.getWeight() < b.getWeight()) return -1;
        if (a.getWeight() > b.getWeight()) return 1;
        return 0;
    }

    int mixFruitByColor(const Fruit& a, const Fruit& b) {
        std::cout << "first fruit is: " << std::endl;
        std::cout << a.getColor() << std::endl;
        return 0;
    }
}
