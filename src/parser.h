/*
* Note: I'd like to rewrite the parser to be more reusable (i.e. 
* abstract read from constructor).
*/
#pragma once

#include <iomanip>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

class CsvParser {
    public:
        CsvParser(std::string filename);

        void printData();
        std::vector<std::vector<std::string>> getData();
        std::vector<std::vector<int>> getDataAsInts();

    private:
        std::vector<std::vector<std::string>> data;

        std::vector<std::vector<std::string>> getCsv(std::string filename);
};
