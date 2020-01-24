#pragma once

#include <iomanip>
#include <fstream>
#include <sstream>
#include <vector>

class CsvParser {
    public:
        CsvParser(std::string filename);

        void printCsv(std::string filename);

    private:
        std::vector<std::vector<std::string>> data;
        
        std::vector<std::vector<std::string>> getCsv(std::string filename);
};
