#include "iter.hpp"

template <typename T>
void iter(T* arr, int size, void (*f)(const T& t))
{
	for (int i = 0; i < size; i++)
		f(arr[i]);
}

template <typename T>
void printTemplate(const T& t)
{
	std::cout << t << std::endl;
}

int	main()
{
	int size = 5;
	int int_arr[5] = {1, 2, 3, 4, 5};
	double double_arr[5] = {1.1111, 2.2222, 3.3333, 4.4444, 5.5555};
	std::string string_arr[5] = { "one", "two", "three", "four", "five" };

	iter(int_arr, size, printTemplate);
	std::cout<<"---------"<<std::endl;
	iter(double_arr, size, printTemplate);
	std::cout<<"---------"<<std::endl;
	iter(string_arr, size, printTemplate);
}