#pragma once
#include <vector>
#include <string>
#include <fstream>
class Parse{
    public:

    struct fileInfo{
    std::string NumPlace;
    std::string Occupation;
    std::string OccupantFace;
    std::string OccupantEmail;
    };

    std::vector<fileInfo> ReadDataFile();
};