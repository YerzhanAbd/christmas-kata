#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest/doctest.h"
#include <lights_control.h>
#include <utility>
#include <stdexcept>

TEST_CASE("Testing lights_control")
{
    LightsController* lights = new LightsController();
    CHECK(lights->getLights() == 0);
    lights->manipulate({0, 0}, {999, 999}, "ON");
    CHECK(lights->getLights() == 1000000);
    lights->manipulate({499, 499}, {500, 500}, "OFF");
    CHECK(lights->getLights() == 999996);
    lights->manipulate({0, 0}, {0, 999}, "OFF");
    CHECK(lights->getLights() == 998996);
    lights->manipulate({0, 0}, {999, 999}, "TOGGLE");
    CHECK(lights->getLights() == 1004);
    lights->manipulate({0, 0}, {999, 999}, "OFF");
    CHECK(lights->getLights() == 0);
}

TEST_CASE("lights_control wrong command")
{
    LightsController* lights = new LightsController();
    CHECK_THROWS_AS(lights->manipulate({0, 0}, {999, 999}, "???"), std::invalid_argument);
}

TEST_CASE("lights_control wrong values")
{
    LightsController* lights = new LightsController();
    CHECK_THROWS_AS(lights->manipulate({-1, 0}, {999, 999}, "ON"), std::invalid_argument);
}

TEST_CASE("given test")
{
    LightsController* lights = new LightsController();
    lights->manipulate({887, 9}, {959, 629}, "ON");
    CHECK(lights->getLights() == 45333);
    lights->manipulate({454, 398}, {844, 448}, "ON");
    CHECK(lights->getLights() == 65274);
    
    lights->manipulate({539, 243}, {559, 965}, "OFF");
    CHECK(lights->getLights() == 64203);
    lights->manipulate({370, 819}, {676, 868}, "OFF");
    CHECK(lights->getLights() == 64203);
    
    lights->manipulate({301, 3}, {808, 453}, "OFF");
    CHECK(lights->getLights() == 47169);

    lights->manipulate({351, 678}, {951, 908}, "ON");
    CHECK(lights->getLights() == 186000);

    lights->manipulate({720, 196}, {897, 994}, "TOGGLE");
    CHECK(lights->getLights() == 232766);
     
    lights->manipulate({831, 394}, {904, 860}, "TOGGLE");
    CHECK(lights->getLights() == 230022);
    

}