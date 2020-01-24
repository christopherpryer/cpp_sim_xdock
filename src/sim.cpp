#include "sim.h"

EmpericalDwellSimulation::EmpericalDwellSimulation(int nRuns, std::vector<std::vector<int>> data) {
    this->nRuns = nRuns;
    this->data = data;
    std::cout << "EmpericalDwellSimulation initialized with " << this->data.size() << " rows" << std::endl;
};