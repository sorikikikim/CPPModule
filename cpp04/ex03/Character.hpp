#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
    private:
        AMateria* inventory[4];
        std::string _name;
    public:
        Character();
        Character(std::string name);
        Character(const Character& ch);
        ~Character();

		Character& operator=(const Character& ch);

       const std::string& getName() const;

        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);

        //void inventoryCheck();
};

#endif