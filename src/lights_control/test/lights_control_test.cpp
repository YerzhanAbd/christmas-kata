#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest/doctest.h"
#include <lights_control.h>
#include <utility>
#include <stdexcept>

TEST_CASE("Testing lights_control")
{
    LightsController* lights = new LightsController();
    CHECK(lights->getLights() == 0);
    CHECK_THROWS_AS(lights->manipulate({0, 0}, {999, 999}, "DELETE"), std::invalid_argument);
}