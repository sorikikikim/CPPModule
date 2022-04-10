#include "Form.hpp"

int main()
{
	Bureaucrat* b1 = NULL;
	Form* f1 = NULL;
	try
	{
		b1 = new Bureaucrat("sorkim", 50);
		f1 = new Form("sorkim's Form", 20, 30);
		std::cout << *b1 << std::endl;
		std::cout << *f1 << std::endl;
		b1->signForm(*f1);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	delete b1;
	delete f1;
}