cmake_minimum_required(VERSION 3.12)

# Project name
project(1337)

# Set the C++ standard to C++20
set(CMAKE_CXX_STANDARD 20)

# Specify compiler to use - CLANG
set(CMAKE_C_COMPILER "clang")
set(CMAKE_CXX_COMPILER "clang++")

# Add the source files to the project
file(GLOB SOURCES *.cpp)

# Define directory name
set(DIR_NAME "build")

# Check if the directory exists or not
if(NOT EXISTS ${DIR_NAME})
    # If the directory does not exist, create it
    file(MAKE_DIRECTORY ${DIR_NAME})
endif()

# Set the created directory as the binary directory
set(CMAKE_BINARY_DIR ${DIR_NAME})

# Set executable output path to the binary directory
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})

# Set the build type to Release
set(CMAKE_BUILD_TYPE Release)

# Add source files to the project
add_executable(
    1337
    ${SOURCES}
)

# Set the compiler flags for Windows
if (WIN32)
    target_compile_options(1337 PRIVATE -Wall -Wextra -pedantic -Werror -g -std=c++20 -O3)
else()
# Set the compiler flags for macOS
    target_compile_options(1337 PRIVATE -Wall -Wextra -pedantic -Werror -g -std=c++20 -O3)
endif()

# Set the executable output directory
set_target_properties(1337 PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/build"
)

# Link any necessary libraries if needed
target_link_libraries(1337
  library1
  library2
)
