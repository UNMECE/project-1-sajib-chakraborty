#include "Capacitor.h"
#include <iostream>


void simulateCapacitor(Capacitor& cap, double R, double deltaT, int steps, double I_const, double V_init) {

    cap.time[0] = 0;
    cap.voltage[0] = V_init; 
    cap.current[0] = I_const;
    

    for (int i = 1; i < steps; i++) {
        cap.time[i] = cap.time[i-1] + deltaT;
        cap.voltage[i] = cap.voltage[i-1] + cap.current[i-1] * deltaT / cap.C;
        cap.current[i] = cap.current[i-1] - (cap.current[i-1] * deltaT) / (R * cap.C);
    }
}

void printResults(const Capacitor& cap, int steps) {
    for (int i = 0; i < steps; i++) {
        if (i % 200 == 0) {
            std::cout << "Time: " << cap.time[i] << "s, Voltage: " << cap.voltage[i] 
                      << "V, Current: " << cap.current[i] << "A\n";
        }
    }
}

