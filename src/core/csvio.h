#ifndef READCSV_H
#define READCSV_H

#include <iostream>
#include <fstream>
#include <vector>
#include "corelink.h"

class CSVio
{
public:
    CSVio();
    bool read(std::string);
    std::vector<std::vector<std::string>> getTable();
private:
    bool table_load = false;
    std::vector<std::vector<std::string>> table;
};

#endif // READCSV_H
