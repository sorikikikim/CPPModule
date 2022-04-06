#include "Form.hpp"

int main()
{
	std::cout << "===========ShrubberyCreationForm============" << std::endl;
	
		Form *s = new Form("a", 30, 100);
		Bureaucrat bob("bob", 150);
        s->beSigned(bob);
}