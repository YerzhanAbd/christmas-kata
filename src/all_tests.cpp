#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "main.h"
#include "string.h"

TEST_CASE("Testing rectArea")
{
    REQUIRE(rectArea(4.0) == doctest::Approx(16.0));
    REQUIRE(rectArea(-2.1) == doctest::Approx(4.41));
    REQUIRE(rectArea(0.0) == doctest::Approx(0));
    REQUIRE(rectArea(1) == doctest::Approx(1));
}

TEST_CASE("Testing response")
{
    CHECK(response() == "fefe");
    CHECK(response() != "ABD");
    CHECK(response() != "Lore Ipsum");
}