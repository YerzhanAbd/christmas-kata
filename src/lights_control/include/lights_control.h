#pragma once
#include <utility>
#include <vector>
#include <string>

class LightsController
{
private:
    std::vector<std::vector<bool>> grid;
public:
    LightsController() : grid(1000, std::vector<bool> (1000, false)) {};
    int getLights ();
    void manipulate(std::pair<int, int> top, std::pair<int, int> bottom, std::string command);
}; 