#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "LZespolona.hh"

TEST_CASE("test LZespolona Sprzezenie") {
    LZespolona x;
    x.re = 1;
    x.im = 1;
    LZespolona y;
    y.re = 1;
    y.im = -1;
    CHECK(Sprzezenie(x) == y);
}

