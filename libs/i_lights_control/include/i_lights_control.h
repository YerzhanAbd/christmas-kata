#pragma once
#include <utility>
#include <vector>
#include <string>

class ILightsController
{
private:
    std::vector<std::vector<int>> grid;
public:
    virtual int getLights()=0;
    ILightsController() {};
    virtual ~ILightsController() {};
    virtual void manipulate(std::pair<int, int> top, std::pair<int, int> bottom, std::string command)=0;
}; 