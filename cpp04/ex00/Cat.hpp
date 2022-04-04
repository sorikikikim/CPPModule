#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{

	public:
		Cat();
		Cat( Cat const & dog);
		~Cat();
		Cat& operator=( const Cat& cat );
		
		void makeSound() const;

};

#endif /* ************************************************************* CAT_H */