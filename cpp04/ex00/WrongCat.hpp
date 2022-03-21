#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{

	public:
		WrongCat();
		WrongCat( WrongCat const & wrongCat );
		~WrongCat();

		WrongCat &		operator=( WrongCat const & wrongCat );
		void 	makeSound() const;

};

#endif /* ************************************************************* WrongCat_H */