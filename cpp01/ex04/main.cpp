//
// Created by 김소리 on 2022/02/28.
//

#include <iostream>
#include <fstream>

void replaceByLine(std::string line, std::ofstream& ofs, std::string src, std::string dest) {
    //find, replace, ofs <<
    std::string::size_type findIdx;
    while ((findIdx = line.find(src)) != std::string::npos) {
        std::string front = line.substr(0, findIdx);
        std::string rear = line.substr(findIdx + src.size(), std::string::npos);
        ofs << front + dest + rear << std::endl;
        line = rear;
    }
}

int main(int argc, char **argv) {
    if (argc != 4) {
        std::cout << "input error" << std::endl;
        return (1);
    }
    else {
        std::ifstream ifs;
        std::ofstream ofs;
        ifs.open(argv[1]);
        if (ifs.fail()) {
            std::cout << "input file open fail." << std::endl;
            return (1);
        }

        ofs.open(argv[1] + (std::string)".replace");
        if (ofs.fail()) {
            std::cout << "output file open fail." << std::endl;
            return (1);
        }

        std::string line;
        while (std::getline(ifs, line)) {
            //find , replace, ofs <<
            if (line.find(argv[2]) == std::string::npos){
                ofs << line << std::endl;
            }
            else
                replaceByLine(line, ofs, argv[2], argv[3]);
        }
        ifs.close();
        ofs.close();
    }
}


