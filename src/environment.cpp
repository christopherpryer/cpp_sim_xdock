#include "environment.h"

CrossDock::CrossDock(int nDwells, int nWorkers, int nDoors) {
    this->nDwells = nDwells;
    this->nWorkers = nWorkers;
    this->nDoors = nDoors;
};

Truck::Truck(int maxWeight, int maxCube) {
    this->maxWeight = maxWeight;
    this->maxCube = maxCube;
};