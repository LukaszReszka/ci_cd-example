add_executable(tests AggregatorTests.cpp)
target_include_directories(tests PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(tests PRIVATE lib)

add_test(NAME tests COMMAND tests)