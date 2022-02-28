//
// Created by 김소리 on 2022/02/27.
//

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie;
Zombie* newZombie( std::string name );
void randomChump( std::string name );

class Zombie {
private:
    std::string name;
public:
    Zombie(std::string name);
    void announce(void);
    ~Zombie();


};


#endif //ZOMBIE_HPP
