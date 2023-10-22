#include <brightness_control.h>
#include <utility>
#include <stdexcept>

int BrightnessController::getLights() {
    int lit = 0;
    for (auto row: this->grid) {
        for (auto col: row) {
            lit += col;
        }
    }
    return lit;
}

void BrightnessController::manipulate(std::pair<int, int> top, std::pair<int, int> bottom, std::string command) {
    if (command != "ON" && command != "OFF" && command != "TOGGLE") {
        throw std::invalid_argument("Choose either ON, OFF, or TOGGLE as the command.");
    }

    int leftTop = top.first;
    int rightTop = top.second;
    int leftBottom = bottom.first;
    int rightBottom = bottom.second;

    if (leftTop < 0 || rightTop < 0 || leftBottom < 0 || rightBottom < 0) {
        throw std::invalid_argument("Only positive valued coordinates allowed");
    }

    for (int row = leftTop; row <= leftBottom; row++) {
        for (int col = rightTop; col <= rightBottom; col++) {
            if (command == "ON") {
                this->grid[row][col] += 1;
            }
            else if (command == "OFF") {
                this->grid[row][col] = std::max(this->grid[row][col]-1, 0);
            }
            else {
                this->grid[row][col] += 2;
            }
        }
    }
}