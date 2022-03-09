//
// Created by Sori Kim on 3/9/22.
//

#include "Fixed.hpp"
#include <cmath>
Fixed::Fixed() : _fixed_point_value(0) {

}

Fixed::Fixed(const Fixed& fixed) {
    *this = fixed;
}

Fixed::Fixed(int fixed) : _fixed_point_value(fixed << _frac_bits) {

}

Fixed::Fixed(float fixed) : _fixed_point_value(static_cast<int>(roundf(fixed * (1 << _frac_bits)))) {

}

Fixed::~Fixed() {

}

int Fixed::getRawBits() const {
    return (this->_fixed_point_value);
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

//할당 연산
Fixed& Fixed::operator=(const Fixed& fixed) {
    _fixed_point_value = fixed.getRawBits();
    return *this;
}

std::ostream& operator<<(std::ostream& out, Fixed const& fixed) {
    return out << fixed.toFloat();
}

//비교 연산
bool Fixed::operator>(const Fixed& fixed) {
    return _fixed_point_value > fixed.getRawBits();
}

bool Fixed::operator<(const Fixed& fixed) {
    return _fixed_point_value < fixed.getRawBits();
}

bool Fixed::operator>=(const Fixed& fixed) {
    return _fixed_point_value >= fixed.getRawBits();
}

bool Fixed::operator<=(const Fixed& fixed) {
    return _fixed_point_value <= fixed.getRawBits();
}

bool Fixed::operator==(const Fixed& fixed) {
    return _fixed_point_value <= fixed.getRawBits();
}

bool Fixed::operator!=(const Fixed& fixed) {
    return _fixed_point_value <= fixed.getRawBits();
}

//사칙 연산
Fixed Fixed::operator+(const Fixed& fixed) {
    Fixed ret;
    ret.setRawBits(this->getRawBits() + fixed.getRawBits());
    return ret;
}

Fixed Fixed::operator-(const Fixed& fixed) {
    Fixed ret;
    ret.setRawBits(this->getRawBits() - fixed.getRawBits());
    return ret;
}

Fixed Fixed::operator*(const Fixed& fixed) {
    Fixed ret;
    ret.setRawBits(this->getRawBits() * fixed.getRawBits() / (1 << _frac_bits));
    return ret;
}

Fixed Fixed::operator/(const Fixed& fixed) {
    Fixed ret;
    ret.setRawBits((this->getRawBits() / fixed.getRawBits()) * (1 << _frac_bits));
    return ret;
}

//전위 후위
Fixed& Fixed::operator++() {
    ++_fixed_point_value;
    return *this;
}

Fixed& Fixed::operator--() {
    --_fixed_point_value;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed temp = *this;
    ++_fixed_point_value;
    return temp;
}

Fixed Fixed::operator--(int) {
    Fixed temp = *this;
    --_fixed_point_value;
    return temp;
}

const Fixed& Fixed::min(const Fixed& fixed1, const Fixed& fixed2) {
    if (fixed1._fixed_point_value < fixed2._fixed_point_value)
        return fixed1;
    return fixed2;
}

const Fixed& Fixed::max(const Fixed& fixed1, const Fixed& fixed2) {
    if (fixed1._fixed_point_value > fixed2._fixed_point_value)
        return fixed1;
    return fixed2;
}

Fixed& Fixed::min(Fixed& fixed1, Fixed& fixed2) {
    if (fixed1._fixed_point_value < fixed2._fixed_point_value)
        return fixed1;
    return fixed2;
}

Fixed& Fixed::max(Fixed& fixed1,  Fixed& fixed2) {
    if (fixed1._fixed_point_value > fixed2._fixed_point_value)
        return fixed1;
    return fixed2;
}