#include <iostream>
#include <lights_control.h>
#include <utility>
using namespace std;

int main() {
    LightsController* lights = new LightsController();
    cout << lights->getLights() << endl;
    return 0;
}