#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
	protected:
		std::string _type;

	public:
		Animal();
		Animal( Animal const & animal );
		virtual ~Animal();
		Animal& operator=( const Animal& animal );

		std::string getType() const;
		void setType(const std::string& type);
		virtual void makeSound() const = 0;

};


#endif /* ********************************************************** ANIMAL_H */