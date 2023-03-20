.PHONY: all clean build check

# Clean the project
clean:
	@rm -rf cmake_install.cmake CMakeFiles CMakeCache.txt build .cache .DS_Store

# Build the project
build:
	@cmake --build ./build --config Release

# Check code
check:
	@clang-tidy bin/main.cpp -- -std=c++20