#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include <exception>

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Bureaucrat;

class Intern
{
	typedef Form* (*formPtr)(const std::string &);
	private:
        static Form* makeSCF(const std::string& target);
        static Form* makeRRF(const std::string& target);
        static Form* makePPF(const std::string& target);
		static const std::string formNames[];
		static const formPtr forms[];

	public:
		Intern();
		Intern(const Intern& i);
		~Intern();
		Intern& operator=(const Intern& i);
		Form *makeForm(const std::string& fname, const std::string& target) const;
		class FormNameException : public std::exception
		{
			virtual const char* what() const throw();
		};
};

std::ostream& operator<<(std::ostream& out, const Form& b);


#endif /* ********************************************************** BUREAUCRAT_H */