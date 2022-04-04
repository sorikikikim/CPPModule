#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal
{
	protected:
		std::string _type;

	public:
		WrongAnimal();
		WrongAnimal( WrongAnimal const & wrongAnimal );
		~WrongAnimal();
		WrongAnimal& operator=( const WrongAnimal& wrongAnimal );

		std::string getType() const;
		void setType(const std::string& type);

		void makeSound() const;

};


#endif /* ********************************************************** WrongAnimal_H */