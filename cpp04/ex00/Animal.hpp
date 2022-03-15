#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{

	public:
		Animal();
		Animal( Animal const & animal );
		~Animal();
		const std::string& getType();
		void makeSound();

		Animal& operator=( const Animal& animal );

	protected:
		const std::string& _type;

};

std::ostream& operator<<( std::ostream& out, const Animal& in );

#endif /* ********************************************************** ANIMAL_H */