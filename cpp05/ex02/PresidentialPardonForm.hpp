#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <string>
# include <exception>
# include <fstream>

#include "Form.hpp"
#include "Bureaucrat.hpp"

class Bureaucrat;

class PresidentialPardonForm : public Form
{
	private:

	public:
		PresidentialPardonForm();
        PresidentialPardonForm(std::string name);
		PresidentialPardonForm(const PresidentialPardonForm& p);
		~PresidentialPardonForm();
		PresidentialPardonForm& operator=(const PresidentialPardonForm& p);
	
        void execute(Bureaucrat const & executor) const ; 
};


#endif /* ********************************************************** BUREAUCRAT_H */