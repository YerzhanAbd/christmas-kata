#pragma once
#include <utility>
#include <vector>

class LightsController
{
private:
    std::vector<std::vector<bool>> grid;
public:
    LightsController() : grid(1000, std::vector<bool> (1000, false)) {};
    int getLights ();
}; 