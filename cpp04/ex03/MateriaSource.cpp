#include "MateriaSource.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

MateriaSource::MateriaSource() {}

MateriaSource::MateriaSource(const MateriaSource &ms) 
{
    *this = ms;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
        if (_materia[i])
            delete _materia[i];
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

MateriaSource &MateriaSource::operator=(const MateriaSource &ms)
{
    if (this != &ms)
    {
        for (int i = 0; i < 4; i++)
        {
            if (this->_materia[i] != NULL)
            {
                delete this->_materia[i]; //
                this->_materia[i] = NULL;
            }
            this->_materia[i] = ms._materia[i]->clone();
        }
    }
    return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void MateriaSource::learnMateria(AMateria *am)
{
    for (int i = 0; i < 4; i++)
        if (_materia[i] == NULL)
        {
            _materia[i] = am;
            return;
        }
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; i++)
        if (_materia[i] && _materia[i]->getType() == type)
            return _materia[i]->clone();
    return 0;
}

void MateriaSource::materiaCheck() {
    for (int i = 0; i < 4; i++) {
        std::cout << "materia[" << i << "]:";
        if (_materia[i] != NULL) 
            std::cout << _materia[i]->getType() << std::endl;
        else   
            std::cout << "null" << std::endl;
    }
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */