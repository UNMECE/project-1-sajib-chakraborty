#include <iostream>
#include "Capacitor.h"

int main() {
    int steps = 50000;
    double deltaT = 1e-10; 
    double R = 1000;
    double C = 100e-12; 
    double I_const = 1e-2; 
    double V_init = 10.0; 
    

    Capacitor cap;
    cap.C = C;
    cap.time.resize(steps);
    cap.voltage.resize(steps);
    cap.current.resize(steps);


    simulateCapacitor(cap, R, deltaT, steps, I_const, V_init);

    printResults(cap, steps);

    return 0;
}

