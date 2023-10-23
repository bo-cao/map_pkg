// FILE: test.cpp

#include <iostream>
#include <cassert>
#include "functions.h"

int main() {
    // Test case 1
    assert(addition(2, 3) == 5);

    // Test case 2
    assert(subtraction(5, 3) == 2);

    // Test case 3
    assert(multiplication(2, 3) == 6);

    // Test case 4
    assert(division(10, 2) == 5);

    // Test case 5
    assert(division(10, 0) == -1);

    std::cout << "All test cases passed!\n";

    return 0;
}