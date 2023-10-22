#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest/doctest.h"
#include <lights_control.h>

TEST_CASE("Testing lights_control")
{
    CHECK(lights_control(2, 2) == 4);
}