add_library(multiply src/multiply.cpp)

add_executable(multiply_test test/multiply_test.cpp)
target_link_libraries(multiply_test
 PRIVATE
 doctest
 multiply)

add_test(multiply_test multiply_test)

target_include_directories(multiply PUBLIC include)
