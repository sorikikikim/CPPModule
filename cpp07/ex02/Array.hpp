#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <exception>

template<typename T>
class Array{
	private:
		T* mContent;
		unsigned int	mSize;
		class IndexOutOfRange : public std::exception{
			const char* what() const throw()
			{
				return ("IndexOutOfRange");
			}
		};
	public:
		Array<T>();
		Array<T>(unsigned int size);
		Array<T>(const Array& array);
		Array&	operator=(const Array& array);
		T&		operator[](int size);
		const T& operator[](int size) const;
		unsigned int	size() const;
		~Array();

};

#endif