#include "Array.hpp"

#define MAX_VAL 750

template <typename T>
Array<T>::Array() : _arr(0), _size(0) {}

template <typename T>
Array<T>::Array(unsigned int size) : _arr(new T[size]), _size(size) {}

template <typename T>
Array<T>::Array(const Array<T>& arr) {
	_arr = NULL;
	_size = 0;
	*this = arr;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& arr) {
	delete [] _arr;

	_arr = new T[arr.size()];
	for (unsigned int i = 0; i < arr.size(); i++)
		_arr[i] = arr[i];
	_size = arr.size();
	return (*this);
}

template <typename T>
T& Array<T>::operator[](int size) {
	if (size < 0 || size >= (int)_size)
		throw IndexOutOfRange();
	return (_arr[size]);
}

template <typename T>
const T& Array<T>::operator[](int size) const {
	if (size < 0 || size >= (int)_size)
		throw IndexOutOfRange();
	return (_arr[size]);
}


template <typename T>
unsigned int Array<T>::size() const {
	return (_size);
}

template <typename T>
Array<T>::~Array() {
	delete [] _arr;
}

int main()
{
    Array<int> arr(9);

    try {
		for (unsigned int i = 0; i < arr.size(); i++)
			arr[i] = i;
    }
    catch(const std::exception&e) {
		std::cerr << e.what() << '\n';
    }

	for (unsigned int i = 0; i < arr.size(); i++)
		std::cout << arr[i] << std::endl;

	std::cout<<"copy version-----------------------"<<std::endl;
	Array<int> arr_cpy(arr);

	for (unsigned int i = 0; i < arr.size(); i++)
		std::cout<<arr_cpy[i]<<std::endl;

	std::cout<<"operator version-----------------------"<<std::endl;
	Array<int> arr_operator;

	arr_operator = arr_cpy;
    
	for (unsigned int i = 0; i < arr.size(); i++)
		std::cout << arr_operator[i] << std::endl;
	return (0);
}