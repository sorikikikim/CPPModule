//
// Created by 김소리 on 2022/03/04.
//

#include "Karen.hpp"

int main(int argc, char **argv) {
    Karen *karen = new Karen();

    if (argc != 2) {
        std::cout << "execute program with level of Karen's complain level" << std::endl;
        return (1);
    }
    else {
        std::string level = (std::string)argv[1];
        karen->complain(level);
    }
}