#include "Bureaucrat.hpp"

int main() {
	std::cout << "--------case 1--------"<< std::endl;
	try { 
		Bureaucrat b1("b1", 75);
		std::cout << b1 << std::endl;
		b1.incrementGrade();
		std::cout << b1 << std::endl;
		b1.decrementGrade();
		std::cout << b1 << std::endl;
	}
	catch (std::exception& e) {
		std::cout << "Error : " << e.what() << std::endl;
	}
	std::cout << std::endl;
	
	
	std::cout << "--------case 2--------"<< std::endl;
	try {
		Bureaucrat b2("b2", 0);
		std::cout << b2 << std::endl;
	}
	catch(std::exception& e) {
		std::cout << "Error : " << e.what() << std::endl;
	}
	std::cout << std::endl;


	std::cout << "--------case 3--------"<< std::endl;
	try {
		Bureaucrat b3("b3", 151);
		std::cout << b3 << std::endl;
	}
	catch(std::exception& e) {
		std::cout << "Error : " << e.what() << std::endl;
	}
	std::cout << std::endl;
	

	std::cout << "--------case 4--------"<< std::endl;
	try {
		Bureaucrat b4("b4", 1);
		b4.incrementGrade();
		std::cout << b4 << std::endl;
	}
	catch(std::exception& e) {
		std::cout << "Error : " << e.what() << std::endl;
	}
	std::cout << std::endl;


	std::cout << "--------case 5--------"<< std::endl;
	try {
		Bureaucrat b5("b5", 150);
		b5.decrementGrade();
		std::cout << b5 << std::endl;
	}
	catch(std::exception& e) {
		std::cout << "Error : " << e.what() << std::endl;
	}
	std::cout << std::endl;
}