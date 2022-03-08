//
// Created by 김소리 on 2022/03/05.
//

#include "Fixed.hpp"

Fixed::Fixed() : _fixed_point_value(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& fixed) {
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

Fixed& Fixed::operator=(const Fixed& fixed)
{
    std::cout << "Assignation operator called" << std::endl;
    _fixed_point_value = fixed.getRawBits();
    return *this;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const {
    std::cout << "getRawBits member fuction called" << std::endl;
    return (this->_fixed_point_value);
}

void Fixed::setRawBits(const int raw) {
    _fixed_point_value = raw;
}