#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/


Form::Form()
: _name(""), _signed(false), _grade_sign(150), _grade_exe(150) {
	//std::cout << "Form Default Constructor called" << std::endl;
}

Form::Form(std::string name, std::string type, int grade_s, int grade_e) 
: _name(name), _type(type), _signed(false), _grade_sign(grade_s), _grade_exe(grade_e) {
	if (_grade_sign < 1 || _grade_exe < 1) 
		throw Form::GradeTooHighException();
	else if (_grade_sign > 150 || _grade_exe > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form& f) 
: _name(f.getName()), _signed(f.getSign()), _grade_sign(f.getSignGrade()), _grade_exe(f.getExeGrade()) { 

	if (_grade_sign < 1 || _grade_exe < 1) 
		throw Form::GradeTooHighException();
	else if (_grade_sign > 150 || _grade_exe > 150 )
		throw Form::GradeTooLowException();
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/


Form::~Form() {
	//std::cout << "Form Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/	


Form& Form::operator=(const Form& f)
{
	*const_cast<std::string *>(&_name) = f.getName();
	*const_cast<std::string *>(&_type) = f.getType();
	_signed = f.getSign();
    *const_cast<int *>(&_grade_sign) = f.getSignGrade();
    *const_cast<int *>(&_grade_sign) = f.getExeGrade(); //const cast ㅈㅏ체가 참조자와 포인터인 경우만 가능?..
	
	return *this;
}

std::ostream& operator<<(std::ostream& out, const Form& f) {
	return out << "name : " << f.getName() << ", signed : " << f.getSign() <<
    ", grade to sign : " << f.getSignGrade() << ", grade to execute : " << f.getExeGrade() <<"."; 
}


/*
** --------------------------------- METHODS ----------------------------------
*/

const char* Form::GradeTooHighException::what() const throw() {
	return ("GradeTooHighException");
}

const char* Form::GradeTooLowException::what() const throw() {
	return ("GradeTooLowException");
}

const std::string Form::getName() const {
	return _name;
}

const std::string Form::getType() const {
	return _type;
}

bool Form::getSign() const {
    return _signed;
}

int Form::getSignGrade() const {
	return _grade_sign;
}

int Form::getExeGrade() const {
	return _grade_exe;
}

void Form::beSigned(const Bureaucrat& b) {
    if (b.getGrade() <= _grade_sign)
        _signed = true;
    else 
        throw Form::GradeTooLowException();
}



/*
** --------------------------------- ACCESSOR ---------------------------------
*/



/* ************************************************************************** */






