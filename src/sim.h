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
        std::vector<Shipment> shipments;
        std::vector<Truck> trucks;
        bool envConfigured { false };  
        
        std::vector<int> calcualteTimeDeltas(); // TODO: as floats (dwells are currently ints).

    public:
        void setEnvironment(CrossDock xDock, std::vector<Truck> trucks, std::vector<Shipment> shipments);
        std::vector<std::vector<int>> getData();
        void generateNewDwells();
        void loadTrucks();
};