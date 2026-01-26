// my restart cpp program

#include <iostream>
using namespace std;

namespace demo {
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