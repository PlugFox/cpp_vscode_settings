.PHONY: all clean build

# Build the project
build:
	@rm -rf build
	@mkdir -p build
	@cd build && cmake .. && make