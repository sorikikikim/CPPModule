#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include <exception>

#include "Bureaucrat.hpp"
class Bureaucrat;
class Form
{
	private:
		const std::string _name;
		bool _signed;
        const int _grade_sign;
        const int _grade_exe;

	public:
		Form();
		Form(std::string name, int grade_s, int grade_e);
		Form(const Form& b);
		~Form();
		Form& operator=(const Form& b);

		//other class can be which inherit GradeTooHighException
		//what() function returns const char* type -> return value can't change : const
		//what() function performs override
		//when inherit exception class, if override what() function, use throw()
		class GradeTooHighException : public std::exception {
			virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception {
			virtual const char* what() const throw();
		};

		const std::string getName() const;
        bool getSign() const;
		int getSignGrade() const;
        int getExeGrade() const;

		void beSigned(const Bureaucrat& b);
		
};

std::ostream& operator<<(std::ostream& out, const Form& b);


#endif /* ********************************************************** BUREAUCRAT_H */