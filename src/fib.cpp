#include "fib.hpp"
#include <fstream>
#include <iostream>
Parse p;
std::vector<Parse::fileInfo> Parse::ReadDataFile(){
    std::vector<Parse::fileInfo> record;
    //std::fstream file;
    std::ifstream sampleFile;
    
    sampleFile.open("/home/cuser/Justin/CSV_Parse/src/sample.csv");

    if(!sampleFile.is_open()){
        std::cout << "Error" << std::endl;
    }
    //file.open(file_name);
    std::string numPlace;
    std::string occupation;
    std::string occupantFace;
    std::string occupantEmail;
    //sampleFile.ignore(',', '\n');
    
    while(sampleFile.good()){
        std::getline(sampleFile, numPlace, ',');
        std::getline(sampleFile, occupation, ',');
        std::getline(sampleFile, occupantFace, ',');
        std::getline(sampleFile, occupantEmail, '\n');

        record.push_back({numPlace, occupation, occupantFace, occupantEmail});

    }
    sampleFile.close();
    return record;
}