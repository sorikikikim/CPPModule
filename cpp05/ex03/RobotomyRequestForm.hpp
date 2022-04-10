#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <string>
# include <exception>
# include <fstream>

#include "Form.hpp"
#include "Bureaucrat.hpp"

class Bureaucrat;

class RobotomyRequestForm : public Form
{
	private:

	public:
		RobotomyRequestForm();
        RobotomyRequestForm(std::string name);
		RobotomyRequestForm(const RobotomyRequestForm& r);
		~RobotomyRequestForm();
		RobotomyRequestForm& operator=(const RobotomyRequestForm& r);

        void execute(Bureaucrat const & executor) const ; 

};


#endif /* ********************************************************** BUREAUCRAT_H */