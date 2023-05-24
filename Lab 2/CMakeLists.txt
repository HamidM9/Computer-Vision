cmake_minimum_required(VERSION 3.25)
project(Lab_2)
set(CMAKE_CXX_STANDARD 17)
find_package(OpenCV REQUIRED)
add_executable(Lab_2 main.cpp filters.cpp filters.h histogram.cpp histogram.h)
target_link_libraries(Lab_2 PRIVATE ${OpenCV_LIBS})


