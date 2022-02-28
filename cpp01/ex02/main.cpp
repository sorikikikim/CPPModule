//
// Created by 김소리 on 2022/02/27.
//
#include <iostream>
#include <string>

int main() {
    std::string str("HI THIS IS BRAIN");

    std::string* stringPTR = &str;
    std::string& stringREF = str;

    std::cout<< "print 'HI THIS IS BRAIN'" <<std::endl;
    std::cout<< *stringPTR <<std::endl;
    std::cout<< stringREF <<std::endl;

    std::cout<< "address of str" <<std::endl;
    std::cout<< stringPTR <<std::endl;
    std::cout<< &stringREF <<std::endl;

}
