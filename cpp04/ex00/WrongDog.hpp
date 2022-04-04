#ifndef WRONGDOG_HPP
# define WRONGDOG_HPP

# include "WrongAnimal.hpp"

class WrongDog : public WrongAnimal
{

	public:
		WrongDog();
		WrongDog( WrongDog const & wrongDog );
		~WrongDog();

		WrongDog& operator=( WrongDog const & wrongDog );
		void makeSound() const;

};

#endif /* ************************************************************* WrongDog_H */