.PHONY: all clean build check

# Build the project
build:
	@cmake --build ./build --config Release

build-gui:
	@cmake-gui .

# Check code
check:
	@clang-tidy *.cpp -- -std=c++20 -Isrc -Itest