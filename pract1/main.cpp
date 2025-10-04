#include <iostream>
#include "BrazoRobotico.h"

using namespace std;

int main() {
    float x, y, z;
    cout << "Ingrese la posición inicial del brazo robótico (x y z): ";
    cin >> x >> y >> z;
    BrazoRobotico brazo(x, y, z);
    brazo.getX();
    brazo.getY();
    brazo.getZ();
    brazo.getSujeta();
    brazo.setCoger();
    brazo.setMover(1.0, 2.0, 3.0);
    brazo.setSoltar();
    return 0;
}