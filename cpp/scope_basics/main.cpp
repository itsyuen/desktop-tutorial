// mian program for starting all objects for runtime execution.

#include <iostream>
#include "test.h"

int main(){
    // instances of two objects, practice constant objects and non-constant object to change its weights.
    demo::Fruit apple(0.2, "red");
    demo::Fruit orange(0.25, "orange");

    int r = demo::compareFruitByWeight(apple, orange);

    std::cout << r <<std::endl;
    std::cout << "this is lighter\n";
    if (r < 0) std::cout << "apple\n";
    else if (r > 0) std::cout << "orange\n";
    else std::cout << "same\n";

    return 0;
}