//
// Created by 김소리 on 2022/03/04.
//

#ifndef KAREN_HPP
#define KAREN_HPP

#include <iostream>

class Karen {
        typedef void (Karen::*funcPtr)(void);
    private:
        static funcPtr fptr[4];
        int complainToNum(std::string level);
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);


    public:
        void complain( std::string level );
};


#endif //KAREN_HPP
