#include "Bureaucrat.hpp"

int main() {
	Bureaucrat b1("b1", 110);
	Bureaucrat b2("b2", 100);

	b1 = b2;
	std::cout << b1 << std::endl;

}