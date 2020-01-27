#pragma once

#include <iostream>
#include <vector>

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

class Shipment {

    public:
        Shipment(std::vector<int> dwells);

    private:
        std::vector<int> dwells;
};

// might just want to make this a struct.
class Truck {

    public:
        Truck(int maxWeight, int maxCube);

    private:
        std::vector<Shipment> shipments;

    public: 
        int maxWeight;
        int maxCube;

        void loadShipments(std::vector<Shipment> shipments);
};