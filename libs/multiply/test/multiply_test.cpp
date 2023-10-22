#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest/doctest.h"
#include <multiply.h>

TEST_CASE("Testing rectArea")
{
    CHECK(multiply(2, 2) == 4);
    CHECK(multiply(0, 0) == 0);
    CHECK(multiply(-1, 2) != 0);
}