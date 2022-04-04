cmake_minimum_required(VERSION 3.13)
project(Aggregator)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_CXX_CLANG_TIDY
  clang-tidy;
  -header-filter=.*
  -checks=*;
  -warnings-as-errors=*;
)

add_compile_options(-Wall -Wextra -pedantic -Werror)

add_subdirectory(lib)
add_subdirectory(tests)

enable_testing()
#include_directories(lib) zamiast wszędzie target_...

add_executable(prog main.cpp)
target_link_libraries(prog PRIVATE lib)
