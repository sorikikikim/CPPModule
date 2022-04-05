#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>

class Bureaucrat
{
	private:
		const std::string _name;
		int _grade;

	public:
		Bureaucrat();
		Bureaucrat(const std::string name, int grade);
		Bureaucrat(const Bureaucrat& b);
		~Bureaucrat();
		Bureaucrat& operator=(const Bureaucrat& b);

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
		int getGrade() const;

		void incrementGrade();
		void decrementGrade();
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& b);


#endif /* ********************************************************** BUREAUCRAT_H */