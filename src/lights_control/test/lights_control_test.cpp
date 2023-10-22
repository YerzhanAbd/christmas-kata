#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest/doctest.h"
#include <lights_control.h>
#include <utility>

TEST_CASE("Testing lights_control")
{
    LightsController* lights = new LightsController();
    CHECK(lights->getLights() == 0);
}