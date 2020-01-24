#pragma once

#include <iostream>
#include <vector>

class EmpericalDwellSimulation {

    public:
        EmpericalDwellSimulation(int nRuns, std::vector<std::vector<int>> data);

    private:
        int nRuns;
        std::vector<std::vector<int>> data;

        void printInitialization();
};