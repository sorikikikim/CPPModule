//
// Created by 김소리 on 2022/02/27.
//

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie;
Zombie* zombieHorde(int N, std::string name );


class Zombie {
private:
    std::string name;
public:
    Zombie();
    Zombie(std::string name);
    void announce(void);
    void setName(std::string name);
    ~Zombie();


};


#endif //ZOMBIE_HPP
