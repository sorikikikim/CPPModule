#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <string>

template <typename T>
void iter(T* arr, int size, void (*f)(T& t));

template <typename T>
void printTemplate(const T& t);

#endif