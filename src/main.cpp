/*
* Description: Cross-dock simulation generated using emperical
* distributions that represent dwell timing between different
* stages of the process. Early implementations will be hardcoded
* to a number of dwells that define the existing problem. Future
* refactors will allow for dynamic dwell structure and application
* configuration.
*
* TODO:
* 1. Get data for dwell pools.
* 2. Define number of runs.
* 3. Define segmenting for distributions usage. i.e. data exceptions.
* 4. Simulate dwell times.
* 5. Load trucks.
* 6. Repeat.
*
* NOTE:
* Would like to implement proper pointers and references in the next
* refactor & optimization.
*/
#include "parser.h"
#include "sim.h"
#include "environment.h"

using namespace std;

int main() {
    CsvParser csv("../tests/test_data.csv");

    int nRuns = 5;
    int maxTruckWeight = 45000;
    int maxTruckCube = 3000;

    EmpericalDwellSimulation sim(nRuns, csv.getDataAsInts());
    
    int nDwells = 10;
    int nWorkers = 10;
    int nDoors = 10;
    CrossDock xDock(nDwells, nWorkers, nDoors);

    int nTrucks = 10;
    std::vector<Truck> trucks;
    for (unsigned int i = 0; i < nTrucks; i++) {
        Truck truck(maxTruckWeight, maxTruckCube);
        trucks.push_back(truck);
    }

    std::vector<Shipment> shipments;
    for (unsigned int i = 0; i < sim.getData().size(); i++) {
        Shipment shipment(sim.getData().at(i));
        shipments.push_back(shipment);
    }

    sim.setEnvironment(xDock, trucks, shipments);

    return 0;
};