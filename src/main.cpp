#include <iostream>
#include <any>
#include "ExerciseConfig.h"

int main()
{
    std::cout << "Version: " << Exercise_VERSION_MAJOR << "." << Exercise_VERSION_MINOR << std::endl;

    std::any value = "Message";
    std::cout << "C++17 feature: std::any value = " << std::any_cast<const char *>(value) << std::endl;
}
