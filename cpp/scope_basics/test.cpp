// my restart cpp program

#include <iostream>
using namespace std;

namespace demo {

    // make a fruit class and some array structures
    // use std::library of array kind to make sure
    // use pointers to practice using a full object to compare apples and oranges.

    class Fruit {
        public:
        // constructor
            Fruit(double w, std::string c) : weight(w), color(c) {}
        // member functions
            double getWeight(){ return weight;}
            std::string getColor(){ return color;}

            void setWeight(double a){ weight = a; }
            void setColor(std::string c){ color = c; }
        private:
            double weight;
            std::string color;
    }

    void Fruit::setWeight(double a){
        weight = a;
    }

int main ()
{
    cout << "Fruit calss test!!" << endl;

    //std::cout << demo::add(2, 3) << std::endl;

    return 0;
}

