#include <iostream>
#include <any>
#include "ExerciseConfig.h"
#include <MathFunctions.h>

int main()
{
    std::cout << "Version: " << Exercise_VERSION_MAJOR << "." << Exercise_VERSION_MINOR << std::endl;

    std::any value = "Message";
    std::cout << "C++17 features" << std::endl;
    std::cout << "std::any value = " << std::any_cast<const char *>(value) << std::endl;

    std::cout << "Libraries" << std::endl;
    std::cout << "MathFunctions::my_sqrt(3) -> " << MathFunctions::my_sqrt(3) << std::endl;
}
