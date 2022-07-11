include_directories (${PALINDROME_SOURCE_DIR}/includes)
add_executable (Test main.cpp)

target_link_libraries (Test
                       Palindrome
                       GTest::GTest
                       )
