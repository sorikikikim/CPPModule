#include "Span.hpp"

Span::Span(void) : n(0) {}

Span::Span(unsigned int n) : n(n) {}

Span::Span(const Span& s) {
	*this = s;
}

Span::~Span() {}

Span& Span::operator=(const Span& s)
{
	if (this != &s) {
		n = s.n;
		vector = s.vector;
	}
	return *this;
}

void Span::addNumber(int num)
{
	if (vector.size() == n)
		throw NoSpaceError();
	
	vector.push_back(num);
}

void Span::addNumber(std::vector<int>::iterator const &begin, std::vector<int>::iterator const &end)
{
	std::vector<int>::iterator iter = begin;
	
	while (iter != end) {
    	if (vector.size() == n)
			throw NoSpaceError();
    	
		vector.push_back(*iter);
    	iter++;
	}
}

long Span::shortestSpan() const
{
	if (vector.size() <= 1)
		throw NoSpanError();

	std::vector<int> sorted_vector = vector;
	std::sort(sorted_vector.begin(), sorted_vector.end());
	
	long ret = static_cast<long>(sorted_vector[1]) - static_cast<long>(sorted_vector[0]);
	for (unsigned long i = 1; i < sorted_vector.size() - 1; i++)
		ret = std::min(ret, static_cast<long>(sorted_vector[i + 1]) - static_cast<long>(sorted_vector[i]));

	return ret;
}

long Span::longestSpan() const
{
	if (vector.size() <= 1)
		throw NoSpanError();

	std::vector<int> sorted_vector = vector;
	std::sort(sorted_vector.begin(), sorted_vector.end());

	return (sorted_vector.back() - sorted_vector.front());
}
