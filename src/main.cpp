#include <iostream>
#include <string>
#include <vector>
#include "fib.hpp"


void PrintDataInfo(Parse::fileInfo i){
    std::cout << i.NumPlace << " " << i.Occupation << " " << i.OccupantFace << " " << i.OccupantEmail << std::endl;
}

int main(){
    Parse parse = Parse();
    std::vector<Parse::fileInfo> data = parse.ReadDataFile();
    
    for(int x = 0; (unsigned)x < data.size(); x++){
        PrintDataInfo(data.at(x));
    }
}
