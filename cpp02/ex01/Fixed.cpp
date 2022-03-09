//
// Created by Sori Kim on 3/8/22.
//

#include "Fixed.hpp"

Fixed::Fixed() : _fixed_point_value(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int fixed) : _fixed_point_value(fixed >> _frac_bits) {
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float fixed) : _fixed_point_value(static_cast<float>(roundf(fixed * (1 << _frac_bits)))) {
    std::cout << "Float constructor called" << std::endl;
}


Fixed::Fixed(const Fixed& fixed) {
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& fixed)
{
    std::cout << "Assignation operator called" << std::endl;
    _fixed_point_value = fixed.getRawBits();
    return *this;
}

std::ostream& operator<<(std::ostream& out, Fixed const& fixed) {
    return out << fixed.toFloat();
}

int Fixed::getRawBits() const {
    return _fixed_point_value;
}

void Fixed::setRawBits(const int raw) {
    _fixed_point_value = raw;
}

float Fixed::toFloat( void ) const {
    return static_cast<float>(_fixed_point_value) / (1 << _frac_bits);
}

int Fixed::toInt( void ) const {
    return _fixed_point_value >> _frac_bits;
}
