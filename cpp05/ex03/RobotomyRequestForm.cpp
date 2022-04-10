#include "RobotomyRequestForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/


RobotomyRequestForm::RobotomyRequestForm()
:Form("", "_robotomy", 75, 45) {}

RobotomyRequestForm::RobotomyRequestForm(std::string name) 
: Form(name, "_robotomy", 75, 45) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& f) { 
    *this = f;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/


RobotomyRequestForm::~RobotomyRequestForm() {}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/	


RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& r)
{
	Form::operator=(r);
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
    if (getExeGrade() < executor.getGrade()) {
        std::cout << "Robotomy Execute Failed." << std::endl;
        throw GradeTooLowException();
    }
    std::cout << "drrr drrr... " << std::endl;
    std::cout << this->getName() << " has been robotomized successfully 50% of the time." << std::endl;
    
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/



/* ************************************************************************** */






