#include "parser.h"

CsvParser::CsvParser(std::string filename) {
    this->data = this->getCsv(filename);
    std::cout << "CsvParser parsed " << this->data.size() << " rows" << std::endl;
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

void CsvParser::printData() {
    for (std::vector<std::string> row : this->data) {
        for (std::string s: row) std::cout << std::setw(12) << s << " ";
        std::cout << std::endl;
    }
};

std::vector<std::vector<std::string>> CsvParser::getData() {
    return this->data;
}

std::vector<std::vector<int>> CsvParser::getDataAsInts() {
    std::vector<std::vector<int>> result;
    for (std::vector<std::string> row : this->data) {
        std::vector<int> R;
        for (auto &s : row) {
            std::stringstream parser(s);
            int x = 0;

            parser >> x;

            R.push_back(x);
        }
        result.push_back(R);
    }
    return result;
};
