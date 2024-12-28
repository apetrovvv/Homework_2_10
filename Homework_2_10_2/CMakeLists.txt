
cmake_minimum_required(VERSION 3.22.0)
set(PROJECT_NAME figure)
project(figure)
set(SOURCES main.cpp equilateralTriangle.cpp 
            figure.cpp isoscelesTriangle.cpp parallelogram.cpp 
            quadriangle.cpp rectangel.cpp rhombus.cpp rightTriangle.cpp 
            square.cpp triangle.cpp)
set(HEADERS equilateralTriangle.h 
            figure.h isoscelesTriangle.h parallelogram.h 
            quadriangle.h rectangle.h rhombus.h rightTriangle.h 
            square.h triangle.h)
add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})