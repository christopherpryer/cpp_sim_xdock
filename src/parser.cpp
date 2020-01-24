#include "parser.h"

CsvParser::CsvParser(std::string filename) {
    this->data = this->getCsv(filename);
    std::cout << "rows parsed: " << this->data.size() << std::endl;
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

void CsvParser::printCsv() {
    for (std::vector<std::string> row : this->data) {
        for (std::string s: row) std::cout << std::setw(12) << s << " ";
        std::cout << std::endl;
    }
};