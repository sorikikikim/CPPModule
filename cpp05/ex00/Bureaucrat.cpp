#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/


Bureaucrat::Bureaucrat()
: _name(std::string("")),
_grade(150) {
	//std::cout << "Bureaucrat Default Constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) 
: _name(name), _grade(grade) {
	if (_grade < 1) 
		throw Bureaucrat::GradeTooHighException();
	else if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat( const Bureaucrat& b)
: _name(b.getName()) { //why
	*this = b;
	if (_grade < 1) 
		throw Bureaucrat::GradeTooHighException();
	else if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/


Bureaucrat::~Bureaucrat() {
	//std::cout << "Bureaucrat Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/	


Bureaucrat& Bureaucrat::operator=(const Bureaucrat& b)
{
	//_name = b.getName();
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


/*
** --------------------------------- ACCESSOR ---------------------------------
*/



/* ************************************************************************** */






