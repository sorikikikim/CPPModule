//
// Created by 김소리 on 2022/03/05.
//

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
    private:
        int _fixed_point_value;
        static const int _frac_bits = 8;

    public:
        Fixed();
        Fixed(const Fixed& fixed);
        Fixed& operator=( const Fixed& fixed );
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};


#endif //FIXED_HPP
