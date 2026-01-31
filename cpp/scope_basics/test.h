#pragma once

#include <string>

namespace demo {

    struct ColorCode{
        u_int8_t r;
        u_int8_t g;
        u_int8_t b;

        std::string c;
        
        int mixColor(const std::string& a, const std::string& b);

    };

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
    int mixFruitByColor(const Fruit& a, const Fruit& b);

}   // namespace demo