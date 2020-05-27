#include <iostream>     

#include "calc.hpp"
#include<fmt/format.h>

int main()
{

    std::cout << "heelo\n";
    std::cout <<  add(2 , 3)<<"\n";
    fmt::print ("the answer is {}.", 42);
    return 0;
}