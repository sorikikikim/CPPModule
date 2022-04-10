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

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& s) { 
    *this = s;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/


ShrubberyCreationForm::~ShrubberyCreationForm() {}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/	


ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& s)
{
	Form::operator=(s);
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

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
    if (getExeGrade() < executor.getGrade()) {
        std::cout << "Shrubbery Execute Failed." << std::endl;
        throw GradeTooLowException();
    }
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






