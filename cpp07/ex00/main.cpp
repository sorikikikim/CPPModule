#include "whatever.hpp"

//the function changes its value, then the original variable you passed into the function gets changed too.

template <typename T>
void swap(T& a, T& b)
{
	T temp = a;

	a = b;
	b = temp;
}

template <typename T>
const T& max(const T&a, const T&b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

template <typename T>
const T& min(const T&a, const T&b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

int main( void ) {
    int a = 2;
    int b = 3;
    
    ::swap( a, b ); //global

    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

    std::string c = "chaine1";
    std::string d = "chaine2";

    ::swap(c, d);

    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

    return 0;
}