#include "Span.hpp"

int main()
{
    srand(time(NULL));

	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << "---------------------------" << std::endl;

	Span sp1 = Span(2);
	try
	{
		sp1.addNumber(21);
		sp1.addNumber(42);
		sp1.addNumber(48);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	std::cout << "---------------------------" << std::endl;

	Span sp2 = Span(5);
	try
	{
		sp2.addNumber(1);
		sp2.longestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "---------------------------" << std::endl;

	Span sp3 = Span(10001);
	std::vector<int> tmp;
	for (int i = 0; i < 10001; i++)
		tmp.push_back(rand()% 10000000);
	sp3.addNumber(tmp.begin(), tmp.end());
	std::cout << sp3.shortestSpan() << std::endl;
	std::cout << sp3.longestSpan() << std::endl;
}