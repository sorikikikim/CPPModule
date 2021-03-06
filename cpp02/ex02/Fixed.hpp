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

        bool	operator>(const Fixed& fixed);
        bool	operator<(const Fixed& fixed);
        bool	operator>=(const Fixed& fixed);
        bool	operator<=(const Fixed& fixed);
        bool	operator==(const Fixed& fixed);
        bool	operator!=(const Fixed& fixed);

        Fixed	operator+(const Fixed& fixed);
        Fixed	operator-(const Fixed& fixed);
        Fixed	operator*(const Fixed& fixed);
        Fixed	operator/(const Fixed& fixed);

        Fixed&	operator++();
        Fixed&	operator--();
        Fixed	operator++(int);
        Fixed	operator--(int);

        static const Fixed& min(const Fixed& fixed1, const Fixed& fixed2);
        static Fixed& min(Fixed& fixed1, Fixed& fixed2);

    static const Fixed& max(const Fixed& fixed1, const Fixed& fixed2);
    static Fixed& max(Fixed& fixed1, Fixed& fixed2);

};

std::ostream& operator<<(std::ostream& out, Fixed const& fx);

#endif //CPP_FIXED_HPP
