cmake_minimum_required(VERSION 3.5)

project(untitled2_ LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

install(TARGETS SFML
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

set(SFML_DIR "C:/Users/Tadiwos Adane/Desktop/Automatic Control and Robotics/Semester 2/Information Engineering/Semester 2/03 - Introduction to SFML/SFML-2.5.1-windows-gcc-7.3.0-mingw-64-bit/SFML-2.5.1/lib/cmake/SFML")
find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)

target_link_libraries(${PROJECT_NAME} sfml-graphics sfml-audio)
target_include_directories(${PROJECT_NAME} PRIVATE "C:/Users/Tadiwos Adane/Desktop/Automatic Control and Robotics/Semester 2/Information Engineering/Semester 2/03 - Introduction to SFML/SFML-2.5.1-windows-gcc-7.3.0-mingw-64-bit/SFML-2.5.1/include")
