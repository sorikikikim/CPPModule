#include "Intern.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/


Intern::Intern() {}

Intern::Intern(const Intern& i) { 
    *this = i;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/


Intern::~Intern() {}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/	


Intern& Intern::operator=(const Intern& i)
{
    (void)i;
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

const char* Intern::FormNameException::what() const throw()
{
	return "Form name is unknown";
}


Form* Intern::makeForm(const std::string& fname, const std::string& target) const {
    Form* form = NULL;
    for (int i = 0; i < 3; i++) {
        if (!formNames[i].compare(fname)) {
            form = (forms[i])(target);
            std::cout << "Intern creates " << form->getName() << std::endl;
            return form;
        }
    }
    throw FormNameException();
}

Form* Intern::makeSCF(const std::string& target) {
    return (new ShrubberyCreationForm(target));
}

Form* Intern::makeRRF(const std::string& target) {
    return (new RobotomyRequestForm(target));
}

Form* Intern::makePPF(const std::string& target) {
    return (new PresidentialPardonForm(target));
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

const Intern::formPtr Intern::forms[] = {
    Intern::makeSCF,
    Intern::makeRRF,
	Intern::makePPF
};

const std::string Intern::formNames[] = {
    "shrubbery creation",
    "robotomy request",
    "presidential pardon"
};

/* ************************************************************************** */






