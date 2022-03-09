//
// Created by Sori Kim on 3/9/22.
//

#include "Fixed.hpp"

Fixed::Fixed() : _fixed_point_value(0) {

}

Fixed::Fixed(const Fixed& fixed) {
    *this = fixed;
}

Fixed::Fixed(int fixed) : _fixed_point_value(fixed >> _frac_bits) {

}

Fixed::Fixed(float fixed) : _fixed_point_value(static_cast<float>(roundf(fixed * (1 << _frac_bits)))) {

}

Fixed::~Fixed() {

}

int Fixed::getRawBits() const {
    return (this->_fixed_point_value);
}

void Fixed::setRawBits(const int raw) {
    _fixed_point_value = raw;
}

Fixed& Fixed::operator=(const Fixed& fixed) {
    _fixed_point_value = fixed.getRawBits();
    return *this;
}

std::ostream& operator<<(std::ostream& out, Fixed const& fixed) {
    return out << fixed.toFloat();
}

float Fixed::toFloat( void ) const {
    return static_cast<float>(_fixed_point_value) / (1 << _frac_bits);
}

int Fixed::toInt( void ) const {
    return _fixed_point_value >> _frac_bits;
}

bool Fixed::operator>(const Fixed &fixed) {
    return _fixed_point_value > fixed.getRawBits();
}

bool Fixed::operator<(const Fixed &fixed) {
    return _fixed_point_value < fixed.getRawBits();
}

bool Fixed::operator>=(const Fixed &fixed) {
    return _fixed_point_value >= fixed.getRawBits();
}

bool Fixed::operator<=(const Fixed &fixed) {
    return _fixed_point_value <= fixed.getRawBits();
}

bool Fixed::operator==(const Fixed &fixed) {
    return _fixed_point_value <= fixed.getRawBits();
}

bool Fixed::operator!=(const Fixed &fixed) {
    return _fixed_point_value <= fixed.getRawBits();
}

Fixed Fixed::operator+(const Fixed& fixed) {
    Fixed ret;
    ret.setRawBits(this->toFloat() + fixed.toFloat());
    return ret;
}

Fixed Fixed::operator-(const Fixed& fixed) {
    Fixed ret;
    ret.setRawBits(this->toFloat() - fixed.toFloat());
    return ret;
}

Fixed Fixed::operator*(const Fixed& fixed) {
    Fixed ret;
    ret.setRawBits(this->toFloat() * fixed.toFloat());
    return ret;
}

Fixed Fixed::operator/(const Fixed& fixed) {
    Fixed ret;
    ret.setRawBits(this->toFloat() / fixed.toFloat());
    return ret;
}

//전위 후위
/*
Fixed& Fixed::operator++(void) {
    ++_fixed_point;
    return *this;
}

Fixed& Fixed::operator--(void) {
    --_fixed_point;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed temp = *this;

    ++_fixed_point;
    return temp;
}

Fixed Fixed::operator--(int) {
    Fixed temp = *this;

    --_fixed_point;
    return temp;
}

Fixed& Fixed::operator=(const Fixed& f) {
    if (this != &f)
        _fixed_point = f.getRawBits();
    return *this;
}*/