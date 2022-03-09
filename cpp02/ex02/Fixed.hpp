//
// Created by Sori Kim on 3/9/22.
//

#ifndef CPP_FIXED_HPP
#define CPP_FIXED_HPP

#include <iostream>

class Fixed {
    private:
        int _fixed_point_value;
        static const int _frac_bits = 8;

    public:
        Fixed();
        Fixed(int fixed);
        Fixed(float fixed);
        Fixed(const Fixed& fixed);
        Fixed& operator=( const Fixed& fixed );
        ~Fixed();

        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;

    bool	operator>(const Fixed& fx);
    bool	operator<(const Fixed& fx);
    bool	operator>=(const Fixed& fx);
    bool	operator<=(const Fixed& fx);
    bool	operator==(const Fixed& fx);
    bool	operator!=(const Fixed& fx);
    Fixed	operator+(const Fixed& fx);
    Fixed	operator-(const Fixed& fx);
    Fixed	operator*(const Fixed& fx);
    Fixed	operator/(const Fixed& fx);
    Fixed&	operator++();
    Fixed&	operator--();//전위
    Fixed	operator++(int);
    Fixed	operator--(int);//후위


};

std::ostream& operator<<(std::ostream& out, Fixed const& fx);


#endif //CPP_FIXED_HPP
