#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain *brain;

	public:
		Cat();
		Cat( Cat const & cat);
		~Cat();
		Cat& operator=( Cat const & cat);
		void makeSound() const;

};

#endif /* ************************************************************* CAT_H */