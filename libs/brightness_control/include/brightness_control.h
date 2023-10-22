#pragma once
#include <i_lights_control.h>
#include <utility>
#include <vector>
#include <string>

class BrightnessController: public ILightsController
{
private:
    std::vector<std::vector<int>> grid;
public:
    BrightnessController() : grid(1000, std::vector<int> (1000, 0)) {};
    int getLights ();
    void manipulate(std::pair<int, int> top, std::pair<int, int> bottom, std::string command);
}; 