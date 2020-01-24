#pragma once

#include <iomanip>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

class CsvParser {
    public:
        CsvParser(std::string filename);

        void printCsv();

    private:
        std::vector<std::vector<std::string>> data;
        
        std::vector<std::vector<std::string>> getCsv(std::string filename);
};
