cmake_minimum_required(VERSION 3.10)

project(PALINDROME)

add_subdirectory(src)
add_subdirectory(tests)
enable_testing()
find_package(GTest REQUIRED)
