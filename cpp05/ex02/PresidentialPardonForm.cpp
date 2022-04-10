#include "PresidentialPardonForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/


PresidentialPardonForm::PresidentialPardonForm()
:Form("", "_presidential", 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(std::string name) 
: Form(name, "_presidential", 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& p) { 
    *this = p;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/


PresidentialPardonForm::~PresidentialPardonForm() {}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/	


PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& p)
{
	Form::operator=(p);
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
    if (getExeGrade() < executor.getGrade()) {
        std::cout << "Presidential Execute Failed." << std::endl;
        throw GradeTooLowException();
    }
    std::cout << this->getName() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
    
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/



/* ************************************************************************** */






