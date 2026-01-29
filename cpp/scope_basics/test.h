#pragma once

#include <string>

namespace demo {

    class Fruit {
    public:
        Fruit(double w, std::string c);

        double getWeight() const;
        const std::string& getColor() const;

            void setWeight(double a);
        void setColor(std::string c);

    private:
        double weight;
        std::string color;

    };

    // free functions (outside of class)
    int compareFruitByWeight(const Fruit& a, const Fruit& b);

}   // namespace demo