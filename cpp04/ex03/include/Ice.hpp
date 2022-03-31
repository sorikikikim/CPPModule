#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include "AMateria.hpp"

class Ice : public AMateria {
    public:
        Ice(); 
        Ice(const Ice& Ice);
		Ice& operator=(const Ice& ice);
        ~Ice();

        AMateria* clone() const = 0;
        void use(ICharacter& target);
};

#endif