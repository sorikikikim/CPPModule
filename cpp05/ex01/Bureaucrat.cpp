#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/


Bureaucrat::Bureaucrat()
: _name(std::string("")), _grade(150) {}

Bureaucrat::Bureaucrat(const std::string name, int grade) 
: _name(name), _grade(grade) {
	if (_grade < 1) 
		throw Bureaucrat::GradeTooHighException();
	else if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat( const Bureaucrat& b)
:_name(b.getName()), _grade(b.getGrade()) { //why
	if (_grade < 1) 
		throw Bureaucrat::GradeTooHighException();
	else if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/


Bureaucrat::~Bureaucrat() {}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/	


Bureaucrat& Bureaucrat::operator=(const Bureaucrat& b)
{
	*const_cast<std::string *>(&_name) = b.getName();
	_grade = b.getGrade();
	
	return *this;
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& b) {
	return out << b.getName() << ", bureaucrat grade " << b.getGrade() <<"."; 
}


/*
** --------------------------------- METHODS ----------------------------------
*/


const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return ("GradeTooHighException");
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return ("GradeTooLowException");
}

const std::string Bureaucrat::getName() const {
	return _name;
}

int Bureaucrat::getGrade() const {
	return _grade;
}

void Bureaucrat::incrementGrade() {
	if (_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	else 
		_grade--;
}

void Bureaucrat::decrementGrade() {
	if (_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade++;
}

void Bureaucrat::signForm(Form& f) {
	try {
		f.beSigned(*this);
		std::cout << this->getName() << " signed " << f.getName() << std::endl;
	}
	catch (std::exception& e) {
		std::cout << this->getName() << " couldn’t sign " << f.getName() << " because " << e.what() << "." << std::endl;
	} 
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/



/* ************************************************************************** */






