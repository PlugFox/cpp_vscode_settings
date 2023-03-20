#include <iostream>
#include <cassert>

using namespace std;

int add(int a, int b) {
    return a + b;
}

void test_add() {
    assert(add(0, 0) == 0);
    assert(add(1, 2) == 3);
    assert(add(5, 7) == 12);
    assert(add(-1, 1) == 0);
    assert(add(100, -100) == 0);
}

void test_main(int argc, char **argv) {
    // basic test
    assert(argc == 1);
    assert(string(argv[0]) == "./a.out");

    // argument printing test
    // don't need to test cout here
    // we're just ensuring that the loop runs without an issue
    //for (int i = 0; i < argc; i++)
    //    ;

    // add function test
    assert(add(1, 2) == 3);
}

int main(int argc, char **argv) {
    test_add();
    test_main(argc, argv);
    cout << "All tests passed!\n";
    return 0;
}