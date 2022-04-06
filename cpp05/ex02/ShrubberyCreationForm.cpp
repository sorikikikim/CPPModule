#include "ShrubberyCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/


ShrubberyCreationForm::ShrubberyCreationForm()
:Form("", "_shrubbery", 145, 137) {
	//std::cout << "ShrubberyCreationForm Default Constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name) 
: Form(name, "_shrubbery", 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& f) { 
    *this = f;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/


ShrubberyCreationForm::~ShrubberyCreationForm() {
	//std::cout << "ShrubberyCreationForm Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/	


ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& s)
{
	Form::operator=(s);
	return *this;
}

std::ostream& operator<<(std::ostream& out, const ShrubberyCreationForm& f) {
	return out << "name : " << f.getName() << ", signed : " << f.getSign() <<
    ", grade to sign : " << f.getSignGrade() << ", grade to execute : " << f.getExeGrade() <<"."; 
}


/*
** --------------------------------- METHODS ----------------------------------
*/

// const char* ShrubberyCreationForm::GradeTooHighException::what() const throw() {
// 	return ("GradeTooHighException");
// }

// const char* ShrubberyCreationForm::GradeTooLowException::what() const throw() {
// 	return ("GradeTooLowException");
// }

const char* ShrubberyCreationForm::MakeFileException::what() const throw() {
    return ("MakeFileException");
}
std::string ShrubberyCreationForm::makeFileName() const {
    return this->getName() + "_shrubbery";
}

std::string ShrubberyCreationForm::writeTree() const {

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

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
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






