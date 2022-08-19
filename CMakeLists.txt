cmake_minimum_required(VERSION 3.10)

project(OperatorPlusTiming DESCRIPTION "How does arrangement of operands affect performance.")

add_executable(OperatorPlusTiming timing.cpp)
find_package(benchmark REQUIRED)
target_link_libraries(OperatorPlusTiming benchmark::benchmark)
