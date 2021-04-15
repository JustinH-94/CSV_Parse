#pragma once
#include <fstream>
#include <iostream>
#include <vector>
//#include <string>
struct Student{
    std::string Numb;
    std::string Occupation;
    std::string Face;
    std::string Email;
};
std::ifstream file;

inline bool FileOpen(std::string path){
    file.open(path);
    return file.is_open();
}

inline std::string CheckFirstVal(){
    std::vector<Student> record;
    unsigned x = 0;
    std::string numb;
    std::string occupation;
    std::string occupantFace;
    std::string occupantEmail;

    while(file.good()){
        std::getline(file, numb, ',');
        std::getline(file, occupation, ',');
        std::getline(file, occupantFace, ',');
        std::getline(file, occupantEmail, '\n');
        record.push_back({numb, occupation, occupantFace, occupantEmail});
    }
    file.close();
    return record.at(x).Numb;
}

inline bool CheckForComma(){
    std::vector<Student> record;

    std::string numb;
    std::string occupation;
    std::string occupantFace;
    std::string occupantEmail;

    while(file.good()){
        std::getline(file, numb, ',');
        std::getline(file, occupation, ',');
        std::getline(file, occupantFace, ',');
        std::getline(file, occupantEmail, '\n');
        record.push_back({numb, occupation, occupantFace, occupantEmail});
    }

    for(unsigned i = 0; i < record.size(); i++){
        if(record.at(i).Numb == "," || record.at(i).Face == "," || record.at(i).Occupation == ","|| record.at(i).Email == ","){
            return true;
        }
    }
    return false;
}



