cmake_minimum_required(VERSION 3.25)
project(Lab_1)

set(CMAKE_CXX_STANDARD 17)
find_package(OpenCV REQUIRED)

add_executable(Lab_1 main.cpp task3.cpp task3.h task4.cpp task4.h task5.cpp task5.h)








target_link_libraries(Lab_1 PRIVATE ${OpenCV_LIBS})


