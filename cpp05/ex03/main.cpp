#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"


int main ()
{
	Form *form;
	Intern intern;
	
	std::cout << "----------------Shrubbery Creation Form----------------" << std::endl;
	try
	{
		form = intern.makeForm("shrubbery creation", "Bender1");
		std::cout << form << std::endl;
		std::cout << *form << std::endl;
		Bureaucrat Bob("Bob", 20);
		std::cout << Bob << std::endl;
		Bob.signForm(*form);
		Bob.executeForm(*form);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	if (form)
		delete form;
	form = NULL;

	std::cout << "----------------Robotomy Request Form----------------" << std::endl;
	try
	{
		form = intern.makeForm("robotomy request", "Bender2");
		std::cout << *form << std::endl;
		Bureaucrat Bob("Bob", 20);
		std::cout << Bob << std::endl;
		Bob.signForm(*form);
		Bob.executeForm(*form);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	if (form)
		delete form;
	form = NULL;
	
	std::cout << "----------------Presidential Pardon Form----------------" << std::endl;
	try
	{
		form = intern.makeForm("presidential pardon", "Bender3");
		std::cout << *form << std::endl;
		Bureaucrat Bob("Bob", 20);
		std::cout << Bob << std::endl;
		Bob.signForm(*form);
		Bob.executeForm(*form);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	if (form)
		delete form;
	form = NULL;

    std::cout << "----------------Unknown Form----------------" << std::endl;
	try
	{
		form = intern.makeForm("shrubbery", "Bender4");
		std::cout << *form << std::endl;
		Bureaucrat Bob("Bob", 20);
		std::cout << Bob << std::endl;
		Bob.signForm(*form);
		Bob.executeForm(*form);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "form : " << form << std::endl;

	if (form) {
		std::cout << "form needs delete " << std::endl;
		delete form;
	}
		

	return (0);
}
