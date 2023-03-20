cmake_minimum_required(VERSION 3.12)

project(1337)

# Set the C++ standard to C++20
set(CMAKE_CXX_STANDARD 20)

# Set the build type to Release
set(CMAKE_BUILD_TYPE Release)

# Add the source files to the project
file(GLOB SOURCES *.cpp)

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
