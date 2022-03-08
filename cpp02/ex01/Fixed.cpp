//
// Created by Sori Kim on 3/8/22.
//

#include "Fixed.hpp"

Fixed::Fixed() : _fixed_point_value(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int fixed) : _fixed_point_value(0) {
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float fixed) : _fixed_point_value(0) {
    std::cout << "Float constructor called" << std::endl;
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
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_fixed_point_value);
}

void Fixed::setRawBits(const int raw) {
    _fixed_point_value = raw;
}

float toFloat( void ) const {

}

int toInt( void ) const {

}