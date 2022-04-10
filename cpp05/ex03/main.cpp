#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


int main ()
{
    std::cout << "----------------Shrubbery Creation Form----------------" << std::endl;
	{
		ShrubberyCreationForm form1 = ShrubberyCreationForm("sorkim3");
		std::cout << form1 << std::endl;
		Bureaucrat Bob("Bob3", 100);
		std::cout << Bob << std::endl;
		Bob.signForm(form1);
		Bob.executeForm(form1);
	}
	std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "----------------Robotomy Request Form----------------" << std::endl;
	{
		RobotomyRequestForm form1 = RobotomyRequestForm("sorkim2");
		std::cout << form1 << std::endl;
		Bureaucrat Bob("Bob2", 20);
		std::cout << Bob << std::endl;
		Bob.signForm(form1);
		Bob.executeForm(form1);
	}
    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "----------------Presidential Pardon Form----------------" << std::endl;
	{
		PresidentialPardonForm form1 = PresidentialPardonForm("sorkim1");
		std::cout << form1 << std::endl;
		Bureaucrat Bob("Bob1", 5);
		std::cout << Bob << std::endl;
		Bob.signForm(form1);
		Bob.executeForm(form1);
	}
    std::cout << std::endl;
    std::cout << std::endl;
	

	return (0);
}