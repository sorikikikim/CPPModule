#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria* _materia[4];
    public:
        MateriaSource();
        MateriaSource(const MateriaSource& ms);
        ~MateriaSource();

        MateriaSource& operator=(const MateriaSource& ms);

        void learnMateria(AMateria* am);
        AMateria* createMateria(std::string const & type);
        void materiaCheck();
};

#endif