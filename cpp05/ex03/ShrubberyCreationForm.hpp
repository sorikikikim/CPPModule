#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <string>
# include <exception>
# include <fstream>

#include "Form.hpp"
#include "Bureaucrat.hpp"

class Bureaucrat;

class ShrubberyCreationForm : public Form
{
	private:
        const std::string _target;

	public:
		ShrubberyCreationForm();
        ShrubberyCreationForm(std::string name);
		ShrubberyCreationForm(const ShrubberyCreationForm& b);
		~ShrubberyCreationForm();
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& b);

        class MakeFileException : public std::exception {
            virtual const char* what() const throw();
        };

        void execute(Bureaucrat const & executor) const ; 
        std::string makeFileName() const ;   
        std::string writeTree() const ;
};



#endif /* ********************************************************** BUREAUCRAT_H */