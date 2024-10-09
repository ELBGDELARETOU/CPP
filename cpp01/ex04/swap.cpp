#include "swap.hpp"

int find_and_replace(const std::string fileName,const std::string s1,const std::string s2){
    std::ifstream inFile(fileName.c_str());
    if(!inFile)
        return (std::cerr << "ERROR: failed opening " << fileName << std::endl, 2);
    std::ofstream outFile((fileName + ".replace").c_str());
    if(!outFile)
        return (std::cerr << "ERROR: failed creating " << fileName + ".replace" << std::endl, 3);
    std::string line;
    while (std::getline(inFile, line)){
        size_t pos = 0;
        while((pos = line.find(s1, pos)) != std::string::npos){
            line.erase(pos, s1.length());
            line.insert(pos, s2);
            pos += s2.length();
        }    
        outFile << line << std::endl;
    }
    inFile.close();
    outFile.close();
    return (0);
}
