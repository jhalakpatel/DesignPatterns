cmake_minimum_required(VERSION 3.10.2)
project(DesignPatterns VERSION 0.1 LANGUAGES CXX)

include_directories(${CMAKE_SOURCE_DIR}/include)
include_directories(${CMAKE_SOURCE_DIR}/googlenet/include)
include_directories(${CMAKE_SOURCE_DIR}/include/sdplog)

# compiler flag
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# add compiler options
add_compile_options("-Wall")
add_compile_options("-Wextra")
add_compile_options("-Wconversion")
add_compile_options("-pedantic")
add_compile_options("-Wfatal-errors")

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

# Build Design Pattern Library
file(GLOB SOURCES "src/*.cpp")
add_library(desingPattern SHARED ${SOURCES})

# Gtest
enable_testing()
add_subdirectory(googletest)

file(GLOB TEST_SOURCES "tests/*.cpp")
add_executable(tests ${TEST_SOURCES})
target_link_libraries(tests desingPattern gtest_main gtest)
