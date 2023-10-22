#include <lights_control.h>
#include <utility>

int LightsController::getLights() {
    int lit = 0;
    for (auto row: this->grid) {
        for (auto col: row) {
            lit += col;
        }
    }
    return lit;
}