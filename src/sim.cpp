#include "sim.h"

EmpericalDwellSimulation::EmpericalDwellSimulation(int nRuns, std::vector<std::vector<int>> data) {
    this->nRuns = nRuns;
    this->data = data;
    std::cout << "EmpericalDwellSimulation initialized with " << this->data.size() << " rows" << std::endl;
};

void EmpericalDwellSimulation::setEnvironment(CrossDock xDock, std::vector<Truck> trucks, std::vector<Shipment> shipments) {
    this->xDock = xDock;
    this->shipments = shipments;
    this->trucks = trucks;
    this->xDock.printCrossDock();
    std::cout << "EmpericalDwellSimulation configured with " << this->trucks.size() << " Trucks" << std::endl;
};

std::vector<int> EmpericalDwellSimulation::calcualteTimeDeltas() {
    std::vector<int> sums;
    for (unsigned int i = 0; i < this->data.size(); i++) {
        int sum = 0;
        for (unsigned j = 0; j < this->xDock.getNumDwells(); j++) {
            sum += this->data.at(i).at(j);
        }
        sums.push_back(sum);
    }
    return sums;
};

std::vector<std::vector<int>> EmpericalDwellSimulation::getData() {
    return this->data;
};