.PHONY: all clean build check

# Build the project
build:
	@cmake --build ./build --config Release

# Check code
check:
	@clang-tidy lib/**.cpp -- -std=c++20