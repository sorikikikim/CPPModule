#ifndef IDENTIFY_HPP
#define IDENTIFY_HPP

#include <iostream>
#include <ctime>
#include <cstdlib>

class Base {
    public: 
        virtual ~Base() {};
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

#endif