#include <cassert> // assert
#include "../../lib/src/add.cpp"

using namespace std;

void add_test() {
    Add add;
    assert(add.call(0, 0) == 0);
    assert(add.call(1, 2) == 3);
    assert(add.call(5, 7) == 12);
    assert(add.call(-1, 1) == 0);
    assert(add.call(100, -100) == 0);
}