cmake_minimum_required(VERSION 3.12)

project(1337)

# Set the C++ standard to C++20
set(CMAKE_CXX_STANDARD 20)

# Add the source files to the project
file(GLOB SOURCES *.cpp)

# Define directory name
set(DIR_NAME "build")

# Check if directory exists or not
if(NOT EXISTS ${DIR_NAME})
    # If directory does not exist, create it
    file(MAKE_DIRECTORY ${DIR_NAME})
endif()

# Set the created directory as the binary directory
set(CMAKE_BINARY_DIR ${DIR_NAME})

# Set executable output path to the binary directory
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})

# Set the build type to Release
set(CMAKE_BUILD_TYPE Release)

# Set the compiler flags for Windows
if (WIN32)
    add_executable(app.exe ${SOURCES})
    target_compile_options(app.exe PRIVATE -Wall -Wextra -pedantic -Werror -g -std=c++20 -O3)
else()
# Set the compiler flags for macOS
    add_executable(app ${SOURCES})
    target_compile_options(app PRIVATE -Wall -Wextra -pedantic -Werror -g -std=c++20 -O3)
endif()

# Link any necessary libraries
#target_link_libraries(build/release/main lib)
