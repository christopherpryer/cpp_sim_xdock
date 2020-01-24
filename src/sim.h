#pragma once

#include <iostream>
#include <vector>
#include "environment.h"

class EmpericalDwellSimulation {

    public:
        EmpericalDwellSimulation(int nRuns, std::vector<std::vector<int>> data);

    private:
        int nRuns;
        std::vector<std::vector<int>> data;
        CrossDock xDock { CrossDock(0, 0, 0) };
        std::vector<Truck> trucks;

    public:
        void setEnvironment(CrossDock xDock, std::vector<Truck> trucks);
};