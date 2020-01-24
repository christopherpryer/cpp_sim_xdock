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
*/
#include "parser.h"
#include <iostream>

using namespace std;

int main() {
    CsvParser csv("test_data.csv");
}