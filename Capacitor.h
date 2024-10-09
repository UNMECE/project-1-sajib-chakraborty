#ifndef CAPACITOR_H
#define CAPACITOR_H

#include <vector>


struct Capacitor {
    std::vector<double> time;  
    std::vector<double> voltage; 
    std::vector<double> current;
    double C;   
};


void simulateCapacitor(Capacitor& cap, double R, double deltaT, int steps, double I_const, double V_init);
void printResults(const Capacitor& cap, int steps);

#endif

