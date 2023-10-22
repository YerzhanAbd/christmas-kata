#include <lights_control.h>
#include <utility>
#include <stdexcept>

int LightsController::getLights() {
    int lit = 0;
    for (auto row: this->grid) {
        for (auto col: row) {
            lit += col;
        }
    }
    return lit;
}

void LightsController::manipulate(std::pair<int, int> top, std::pair<int, int> bottom, std::string command) {
    if (command != "ON" && command != "OFF" && command != "TOGGLE") {
        throw std::invalid_argument("Choose either ON, OFF, or TOGGLE as the command.");
    }
}