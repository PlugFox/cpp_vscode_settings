.PHONY: all clean build check

# Build the project
build:
	@rm -rf build
	@mkdir -p build
	@cd build && cmake .. && make

# Check code
check:
	@clang-tidy *.cpp -- -std=c++20 -Isrc -Itest