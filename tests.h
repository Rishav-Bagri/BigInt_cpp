#ifndef TESTS_H
#define TESTS_H

#include <iostream>
#include <cassert>
#include <sstream>
#include "BigInt.h"

using namespace std;

// 🔹 constructor test
inline void test_constructor() {
    BigInt a("123456789123456789");
    assert(a.toString() == "123456789123456789");

    BigInt b("0");
    assert(b.toString() == "0");

    BigInt c("0000");
    assert(c.toString() == "0");

    cout << "[PASS] Constructor tests\n";
}

// 🔹 input (cin >>)
inline void test_input_operator() {
    stringstream ss("987654321");

    BigInt a;
    ss >> a;

    assert(a.toString() == "987654321");

    cout << "[PASS] Input operator (>>) tests\n";
}

// 🔹 output (cout <<)
inline void test_output_operator() {
    BigInt a("123456789");

    stringstream ss;
    ss << a;

    assert(ss.str() == "123456789");

    cout << "[PASS] Output operator (<<) tests\n";
}

// 🔹 run all
inline void run_all_tests() {
    test_constructor();
    test_input_operator();
    test_output_operator();

    cout << "All tests passed\n";
}

#endif