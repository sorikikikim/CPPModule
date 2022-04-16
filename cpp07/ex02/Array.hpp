#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <exception>

template<typename T>
class Array{
	private:
		T* _arr;
		unsigned int _size;
		class IndexOutOfRange : public std::exception{
			const char* what() const throw() {
				return ("IndexOutOfRange");
			}
		};
	public:
		Array<T>();
		Array<T>(unsigned int size);
		Array<T>(const Array& arr);
		Array&	operator=(const Array& arr);
		T&		operator[](int size);
		const T& operator[](int size) const;
		unsigned int	size() const;
		~Array();

};

#endif