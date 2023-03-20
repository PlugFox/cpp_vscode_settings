_build:
	@clang++ \
		-fcolor-diagnostics -fansi-escape-codes \
		-g -std=c++20 -O3 -Wall -Wextra -pedantic -Werror \
		bin/main.cpp -o build/Leetcode.exe
