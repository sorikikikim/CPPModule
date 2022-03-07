//
// Created by 김소리 on 2022/03/05.
//

#ifndef FIXED_HPP
#define FIXED_HPP


class Fixed {
    private:
        int store_fixed_point;
        static const int store_fractional_bits = 8;

    public:
        Fixed();
        ~Fixed();
        
};


#endif //FIXED_HPP
