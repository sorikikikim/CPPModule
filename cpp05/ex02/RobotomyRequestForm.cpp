#include "RobotomyRequestForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/


RobotomyRequestForm::RobotomyRequestForm()
:Form("", "_shrubbery", 145, 137) {
	//std::cout << "RobotomyRequestForm Default Constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string name) 
: Form(name, "_shrubbery", 145, 137) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& f) { 
    *this = f;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/


RobotomyRequestForm::~RobotomyRequestForm() {
	//std::cout << "RobotomyRequestForm Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/	


RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& s)
{
	Form::operator=(s);
	return *this;
}

std::ostream& operator<<(std::ostream& out, const RobotomyRequestForm& f) {
	return out << "name : " << f.getName() << ", signed : " << f.getSign() <<
    ", grade to sign : " << f.getSignGrade() << ", grade to execute : " << f.getExeGrade() <<"."; 
}


/*
** --------------------------------- METHODS ----------------------------------
*/

// const char* RobotomyRequestForm::GradeTooHighException::what() const throw() {
// 	return ("GradeTooHighException");
// }

// const char* RobotomyRequestForm::GradeTooLowException::what() const throw() {
// 	return ("GradeTooLowException");
// }

const char* RobotomyRequestForm::MakeFileException::what() const throw() {
    return ("MakeFileException");
}
std::string RobotomyRequestForm::makeFileName() const {
    return this->getName() + "_shrubbery";
}

std::string RobotomyRequestForm::writeTree() const {

std::string tree = "    oxoxoo    ooxoo \n \
  ooxoxo oo  oxoxooo  \n \
 oooo xxoxoo ooo ooox  \n \
 oxo o oxoxo  xoxxoxo  \n \
  oxo xooxoooo o ooo  \n \
    ooo\\oo\\  /o/o  \n \
        \\  \\/ /  \n \
         |   /  \n \
         |  |  \n \
         | D|  \n \
         |  | \n \
         |  | \n \
  ______/____\\____ ";

  return tree;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
    if (getExeGrade() < executor.getGrade())
        throw GradeTooLowException();
    std::string filename = makeFileName();
    std::ofstream fout(filename, std::ios::out);
    if (!fout)
        throw MakeFileException();
    fout << writeTree();
    fout.close();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/



/* ************************************************************************** */






