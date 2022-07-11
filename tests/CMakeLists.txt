find_package(GTest REQUIRED)

include_directories (${PALINDROME_SOURCE_DIR}/includes)

add_definitions(-fprofile-arcs -ftest-coverage )

add_executable (Test main.cpp)
target_link_libraries (Test
                       Palindrome
                       GTest::GTest
                       gcov
                       )
