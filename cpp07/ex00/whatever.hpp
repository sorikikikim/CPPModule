#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

// T : name of type
template <typename T> 
void swap(T& a, T& b);

template <typename T>
const T& max(const T&a, const T&b);

template <typename T>
const T& min(const T&a, const T&b);

#endif