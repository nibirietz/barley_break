cmake_minimum_required(VERSION 3.24)
project(barley_break)

set(CMAKE_CXX_STANDARD 17)

set(dir ${CMAKE_CURRENT_SOURCE_DIR})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${dir}/bin")


find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)

add_executable(barley_break main.cpp)

target_link_libraries(barley_break sfml-graphics sfml-audio)