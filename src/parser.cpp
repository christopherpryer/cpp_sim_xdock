#include "parser.h"

CsvParser::CsvParser(std::string filename) {
    this->data = this->getCsv(filename);
};

std::vector<std::vector<std::string>> CsvParser::getCsv(std::string filename) {
    char separator = ',';
    std::vector<std::vector<std::string>> result;
    std::string row, item;

    std::ifstream in(filename);
    while(getline(in, row)) {
        std::vector<std::string> R;
        std::stringstream ss(row);
        while (getline(ss, item, separator)) R.push_back(item);
        result.push_back(R);
    }
    in.close();
    return result;
};