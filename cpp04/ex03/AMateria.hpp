#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
#include <string>

# include "ICharacter.hpp"
class ICharacter;

class AMateria 
{
    protected:
        std::string _type;

    public:
        AMateria(); //declare privately to prevent instance creation
        AMateria(const AMateria& am);
        virtual ~AMateria();
        AMateria(std::string const & type);
        
		AMateria& operator=(const AMateria& am);

        std::string const & getType() const; //Returns the materia type
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif
