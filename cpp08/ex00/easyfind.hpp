#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>

class EasyFindError : public std::exception {
    public:
        const char* what() const throw() {
            return "Failed";
        }
};

//assuming T is a container of Integer
//find first occurence of the second parameter in the first parameter
template <typename T>
typename T::const_iterator easyfind(T &container, int n) {
	typename T::const_iterator iter;
    
    iter = std::find(container.begin(), container.end(), n);

	if (iter == container.end())
		throw EasyFindError();

	return iter;
}

#endif