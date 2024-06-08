
#include "MateriaSource.hpp"


MateriaSource::MateriaSource()
{
    std::cout << "default constructor of Materia is called" << std::endl;
}


MateriaSource::~MateriaSource()
{
    std::cout << "default deconstructor is called" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if ((this->inventory)[i])
            delete (this->inventory)[i];
    }
}

MateriaSource::MateriaSource(MateriaSource const & other)
{
    *this = other;
}

MateriaSource& MateriaSource::operator=(MateriaSource const & other)
{
    if (this != &other)
        {
        for (int i = 0; i < 4; i++)
        {
            if ((this->inventory)[i])
                delete (this->inventory)[i];
        }
        for (int i = 0; i < 4; i++)
        {
            if ((other.inventory)[i])
                (this->inventory)[i] = (other.inventory)[i]->clone();
        }
    }
    return *this;
}

void MateriaSource::learnMateria(AMateria* ptr)
{
    for (int i = 0; i < 4; i++)
    {
        if (!(this->inventory)[i])
        {
            this->inventory[i] = ptr;
            std::cout << "Materia " << ptr->getType() << " is saved at index " << i << std::endl;
            return ;
        }
    }
    std::cout << "All slots are full" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    
    for (int i = 0; i < 4; i++)
    {
        if(this->inventory[i] && (this->inventory)[i]->getType() == type)
        {
            return (this->inventory)[i]->clone();
        }
    }
    std::cout << "Materia " << type << " is not found" << std::endl;
    return NULL;
}