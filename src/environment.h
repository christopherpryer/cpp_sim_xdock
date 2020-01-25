#pragma once

#include <iostream>

class CrossDock {

    public:
        CrossDock(int nDwells, int nWorkers, int nDoors);

    private:
        int nDwells;
        int nWorkers;
        int nDoors;

    public:
        void printCrossDock();
        int getNumDwells();
};

// might just want to make this a struct.
class Truck {

    public:
        Truck(int maxWeight, int maxCube);
        
        int maxWeight;
        int maxCube;
};