//
// Created by 김소리 on 2022/03/04.
//

#include "Karen.hpp"

Karen::funcPtr Karen::fptr[] = {
        &Karen::debug, &Karen::info, &Karen::warning, &Karen::error
};


void Karen::debug(void) {
    std::cout << "[ DEBUG ] " << std::endl;
    std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}
void  Karen::info(void) {
    std::cout << "[ INFO ] " << std::endl;
    std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void  Karen::warning(void) {
    std::cout << "[ WARNING ] " << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void  Karen::error(void) {
    std::cout << "[ ERROR ] " << std::endl;
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

int Karen::complainToNum( std::string level ) {
    std::string complains[4] = {"DEBUG", "INFO", "WARNING", "ERROR" };

    for (int i = 0; i < 4; i++)
        if (!level.compare(complains[i]))
            return (i);
    return (4);
}

void  Karen::complain( std::string level ) {
   int levelNum = complainToNum(level);

    switch (levelNum) {
        case 0:
            (this->*fptr[0])();
        case 1:
            (this->*fptr[1])();
        case 2:
            (this->*fptr[2])();
        case 3:
            (this->*fptr[3])();
            break;
        case 4:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}
