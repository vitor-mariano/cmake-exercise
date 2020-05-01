cmake_minimum_required(VERSION 3.10)

project(Exercise VERSION 0.1.0)

add_subdirectory(lib/MathFunctions)

add_executable("${PROJECT_NAME}" src/main.cpp)

target_link_libraries(Exercise PUBLIC MathFunctions)

configure_file(src/ExerciseConfig.h.in src/ExerciseConfig.h)

target_include_directories("${PROJECT_NAME}" PUBLIC
    "${PROJECT_BINARY_DIR}/src"
    "${PROJECT_SOURCE_DIR}/lib/MathFunctions"
)

set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")
