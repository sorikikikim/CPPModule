//
// Created by 김소리 on 2022/03/05.
//

#include "Fixed.hpp"

Fixed::Fixed() : store_fixed_point(0) {}

Fixed::Fixed(const Fixed& fixed)
: store_fixed_point(fixed.store_fixed_point), store_fractional_bits(fixed.store_fractional_bits) {}

Fixed& Fixed::operator=(const Fixed& fixed)
{

}
