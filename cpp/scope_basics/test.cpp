// my restart cpp program

#include <iostream>
using namespace std;

namespace demo {

    // make a fruit class and some array structures
    // use std::library of array kind to make sure
    // use pointers to practice using a full object to compare apples and oranges.

    int add(int a, int b){
        return a +  b;
    }


}

int main ()
{
    cout << "Hello world!! again" << endl;

    std::cout << demo::add(2, 3) << std::endl;

    return 0;
}

