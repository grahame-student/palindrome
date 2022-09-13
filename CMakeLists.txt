cmake_minimum_required(VERSION 3.10)
set (CMAKE_CXX_STANDARD 11)

project(PALINDROME)
set(CMAKE_CXX_FLAGS "${CMAKE_C_FLAGS} -O0 -g")

add_subdirectory(src)
add_subdirectory(tests)
enable_testing()
