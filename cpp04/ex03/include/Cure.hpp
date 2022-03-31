#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include "AMateria.hpp"

class Cure : public AMateria {
    public:
        Cure(); 
        Cure(const Cure& cure);
		Cure& operator=(const Cure& cure);
        ~Cure();

        AMateria* clone() const = 0;
        void use(ICharacter& target);
};

#endif